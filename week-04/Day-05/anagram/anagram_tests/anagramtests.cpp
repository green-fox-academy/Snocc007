//
// Created by Snöcc on 2019-02-07.
//

#include "gtest/gtest.h"
#include "anagramClass.h"


TEST(Anagram, anagramTest)
{

    std::string testA = "this";
    std::string testB = "shit";

    ASSERT_EQ(anagram(testA, testB), true);
}