#include <iostream>
#include <SDL.h>
#include <time.h>
#include <vector>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//Draws geometry on the canvas
void draw();

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

std::vector <int> x;
std::vector <int> y;

int a;
int b;
int c ;

void draw()
{




    }
    // Create a line drawing function that takes 2 parameters:
    // The x and y coordinates of the line's starting point
    // and draws a line from that point to the center of the canvas.
    // Draw at least 3 lines with that function. Use loop for that.


bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Line in the middle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main( int argc, char* args[] ) {
    srand(time(NULL));

    std::cout << "Give me the vertical starting point: " << std::endl;
    std::cin >> a;

    std::cout << "Give me the horizontal starting point: " << std::endl;
    std::cin >> b;

    std::cout << "Give me how many lines I should draw: " << std::endl;
    std::cin >> c;




    //Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    int state = 0;                                  // declaring variable for the state of randomization
                                                    // at this point there is NO randomization yet
    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
        SDL_RenderClear(gRenderer);

       draw();




        if (state == 0) {


            x.push_back(a);             // putting user input as 1st vector "x" with vertical starting point coordinates
            y.push_back(b);             // putting user input as 1st vector "y" with horizontal starting point coordinates



            state++;                    // incrementing the state of randomization
                                        // at this point randomization (for starting coordinates) started

        } else if (state ==1 ){

            for (int j = 0; j < c - 1; j++) {

                a = rand() % 630 + 1;     // getting random vertical starting point coordinates
                b = rand() % 479 + 1;     // getting random horizontal starting point coordinates

                x.push_back(a);
                y.push_back(b);

            }

            state ++;                   // incrementing again the state of randomization
                                        // randomization (for starting coordinates) STOPs at this point


        } else {

            for (int i = 0; i < c; i++) {       // drawing the lines

                SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0x00, 0xFF);
                SDL_RenderDrawLine(gRenderer, x.at(i), y.at(i), SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);


            }
        }


        //Update screen
        SDL_RenderPresent(gRenderer);



    }

    //Free resources and close SDL
    close();

    return 0;
}