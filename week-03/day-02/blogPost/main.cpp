#include <iostream>
#include "BlogPost.h"
#include <string>

int main() {

    std::string loremIpsumText = "Lorem ipsum dolor sit amet.";
    std::string waitButWhy = "A popular long-form, stick-figure-illustrated blog about almost everything.";
    std::string oneEngineer = "Daniel Hanley, a cybersecurity engineer at IBM, \n"
                              "doesn’t want to be the center of attention. \n"
                              "When I asked to take his picture outside one of IBM’s New York City offices, \n"
                              "he told me that he wasn’t really into the whole organizer profile thing.";

    BlogPost LoIp = BlogPost("Lorem Ipsum", "John Doe", loremIpsumText, "2000.05.04.");
    BlogPost waBuWhy = BlogPost("Wait But Why", "Tim Urban", waitButWhy, "2000.10.10.");
    BlogPost oneEng = BlogPost("One Engineer Is Trying to Get IBM to Reckon With Trump",
            "William Turton", oneEngineer, "2017.03.28.");


    std::cout << LoIp.getComentText() << std::endl;
    std::cout << waBuWhy.getComentText() << std::endl;
    std::cout << oneEng.getComentText() << std::endl;

    return 0;
}