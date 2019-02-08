//
// Created by Snöcc on 2019-02-07.
//

#include "anagramClass.h"

bool anagram(std::string str1, std::string str2)
{
    int str1Length = str1.length();
    int str2Length = str2.length();
    if (str1Length != str2Length)
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < str1Length; i++) {
        if (str1[i] != str2[i]) {
            return false;
        } else {
            return true;
        }
    }
}
