#include "kinematics.h"

Kinematics::Kinematics(Vector3D acceleration, Vector3D velocity):
    acceleration(acceleration), velocity(velocity)
{

}

const Vector3D &Kinematics::getAcceleration() const
{
    return acceleration;
}

void Kinematics::setAcceleration(const Vector3D &newAcceleration)
{
    acceleration = newAcceleration;
}

const Vector3D &Kinematics::getVelocity() const
{
    return velocity;
}

void Kinematics::setVelocity(const Vector3D &newVelocity)
{
    velocity = newVelocity;
}
