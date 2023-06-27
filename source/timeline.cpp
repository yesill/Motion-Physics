#include "timeline.h"

Timeline::Timeline(Vector3D position, Shape shape, double mass)
{
    this->timeline.insert({Time(0), Parameters(position, shape, mass)});
}

const std::map<Time, Parameters> &Timeline::getTimeline() const
{
    return timeline;
}

void Timeline::setTimeline(const std::map<Time, Parameters> &newTimelaine)
{
    timeline = newTimelaine;
}

void Timeline::addToTimeline(Time time, Parameters parameters)
{
    this->timeline.insert({time, parameters});
}
