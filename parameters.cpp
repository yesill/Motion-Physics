#include "parameters.h"

Parameters::Parameters(Vector3D acceleration, Vector3D velocity):
    acceleration(acceleration), velocity(velocity)
{

}

const Vector3D &Parameters::getAcceleration() const
{
    return acceleration;
}

void Parameters::setAcceleration(const Vector3D &newAcceleration)
{
    acceleration = newAcceleration;
}

const Vector3D &Parameters::getVelocity() const
{
    return velocity;
}

void Parameters::setVelocity(const Vector3D &newVelocity)
{
    velocity = newVelocity;
}
