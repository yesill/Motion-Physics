#ifndef TIMELINE_H
#define TIMELINE_H
#include <map>
#include "parameters.h"
#include "time.h"


class Timeline
{
private:
    std::map<Time, Parameters> timeline;
public:
    Timeline(Vector3D position, Shape shape, double mass);

    const std::map<Time, Parameters> &getTimeline() const;
    void setTimeline(const std::map<Time, Parameters> &newTimelaine);

    void addToTimeline(Time time, Parameters parameters);
};

#endif // TIMELINE_H
