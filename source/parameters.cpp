#include "parameters.h"

Parameters::Parameters(
        Vector3D position,
        Shape shape,
        double mass
    ):
    position(position),
    shape(shape),
    mass(mass),
    acceleration(Vector3D(0,0,0)),
    velocity(Vector3D(0,0,0))
{

}

Parameters::Parameters(
        Vector3D position,
        Shape shape,
        double mass,
        Vector3D acceleration,
        Vector3D velocity
    ):
    position(position),
    shape(shape),
    mass(mass),
    acceleration(acceleration),
    velocity(velocity)
{

}

const Vector3D &Parameters::getPosition() const
{
    return position;
}

void Parameters::setPosition(const Vector3D &newPosition)
{
    position = newPosition;
}

const Shape &Parameters::getShape() const
{
    return shape;
}

void Parameters::setShape(const Shape &newShape)
{
    shape = newShape;
}

double Parameters::getMass() const
{
    return mass;
}

void Parameters::setMass(double newMass)
{
    mass = newMass;
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
