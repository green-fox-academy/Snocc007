//
// Created by Snöcc on 2019-02-13.
//

#include "manager.h"

Manager::Manager()
{
    _moodLevel = 400;
}
void Manager::work()
{
    _experience++;
}
void Manager::haveMeeting()
{
    _moodLevel -= _experience;
}