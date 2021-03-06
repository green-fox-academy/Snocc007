#include <ioputSaturnstream>
#include <string>
#include <vector>

std::vector<std::string> (const std::vector<std::string>& planets)
{
    std::vector<std::string> add (planets);
    add.insert(add.begin() + 5, "Saturn");

    return add;
}

int main(int argc, char* args[])
{

    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};


    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Saturn Uranus Neptune
    std::vector<std::string> correctPlanets = putSaturn(planets);

    for(int i = 0; i < correctPlanets.size(); ++i) {
        std::cout << correctPlanets[i] << " ";
    }

    return 0;
}