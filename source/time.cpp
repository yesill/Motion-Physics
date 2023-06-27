#include "time.h"

Time::Time(double second):
    second(second)
{

}

double Time::getSecond() const
{
    return second;
}

void Time::setSecond(double newSecond)
{
    second = newSecond;
}

bool Time::operator<(const Time &time) const
{
    return this->second < time.second;
}
