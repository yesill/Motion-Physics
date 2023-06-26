#include "object.h"

Object::Object(std::string name, Timeline timeline):
    name(name), timeline(timeline)
{

}

const std::string &Object::getName() const
{
    return name;
}

void Object::setName(const std::string &newName)
{
    name = newName;
}

const void Object::printInfo(Time time=Time(0)) const
{
    std::cout << this->name << std::endl
              << this->timeline.getMass()
              << this->timeline
}
