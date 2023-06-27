#ifndef OBJECT_H
#define OBJECT_H
#include <string>
#include "vector3d.h"
#include "timeline.h"
#include "time.h"

class Object
{
private:
    std::string name;
    Timeline timeline;
public:
    Object(std::string, Timeline timeline);

    const std::string &getName() const;
    void setName(const std::string &newName);
    const Timeline &getTimeline() const;
    void setTimeline(const Timeline &newTimeline);

    const void printInfo() const;
};

#endif // OBJECT_H
