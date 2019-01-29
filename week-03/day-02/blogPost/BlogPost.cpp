//
// Created by Snöcc on 2019-01-29.
//

#include "BlogPost.h"
#include <string>


BlogPost::BlogPost(std::string authName, std::string titleText,
                    std::string commentText, std::string dateOfPublication) {

    authorName = authName;
    title = titleText;
    text = commentText;
    date = dateOfPublication;





}
std::string BlogPost::getComentText() {


    return text;

}