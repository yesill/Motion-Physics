#include "timeline.h"

Timeline::Timeline(
    int *timestamps,
    Vector3D *positions,
    double *mass,
    Parameters *parameters,
    Vector3D *shapes
):
    timestamps(timestamps),
    positions(positions),
    mass(mass),
    parameters(parameters),
    shapes(shapes)
{

}

int *Timeline::getTimestamps() const
{
    return timestamps;
}

void Timeline::setTimestamps(int *newTimestamps)
{
    timestamps = newTimestamps;
}

Vector3D *Timeline::getPositions() const
{
    return positions;
}

void Timeline::setPositions(Vector3D *newPositions)
{
    positions = newPositions;
}

double *Timeline::getMass() const
{
    return mass;
}

void Timeline::setMass(double *newMass)
{
    mass = newMass;
}

Parameters *Timeline::getParameters() const
{
    return parameters;
}

void Timeline::setParameters(Parameters *newParameters)
{
    parameters = newParameters;
}

Vector3D *Timeline::getShapes() const
{
    return shapes;
}

void Timeline::setShapes(Vector3D *newShapes)
{
    shapes = newShapes;
}
