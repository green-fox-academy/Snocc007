//
// Created by Snöcc on 2019-01-29.
//

#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H

#include <string>

class BlogPost {

public:

    BlogPost(std::string, std::string, std::string, std::string);

    std::string getComentText();

private:
    std::string authorName;
    std::string title;
    std::string text;
    std::string date;




};


#endif //BLOGPOST_BLOGPOST_H
