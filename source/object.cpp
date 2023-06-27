#include "object.h"

Object::Object(std::string name, Timeline timeline):
    name(name), timeline(timeline)
{

}

const Timeline &Object::getTimeline() const
{
    return timeline;
}

void Object::setTimeline(const Timeline &newTimeline)
{
    timeline = newTimeline;
}
const std::string &Object::getName() const
{
    return name;
}

void Object::setName(const std::string &newName)
{
    name = newName;
}

const void Object::printInfo() const
{
    std::cout << this->getName() << std::endl;
}
