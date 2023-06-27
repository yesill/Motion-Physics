#ifndef PARAMETERS_H
#define PARAMETERS_H
#include "vector3d.h"
#include "shape.h"

class Parameters
{
private:
    Vector3D position;
    Shape shape;
    double mass;
    Vector3D acceleration;
    Vector3D velocity;
public:
    Parameters(Vector3D position, Shape shape, double mass);
    Parameters(Vector3D position, Shape shape, double mass, Vector3D acceleration, Vector3D velocity);
    const Vector3D &getPosition() const;
    void setPosition(const Vector3D &newPosition);
    const Shape &getShape() const;
    void setShape(const Shape &newShape);
    double getMass() const;
    void setMass(double newMass);
    const Vector3D &getAcceleration() const;
    void setAcceleration(const Vector3D &newAcceleration);
    const Vector3D &getVelocity() const;
    void setVelocity(const Vector3D &newVelocity);
};

#endif // PARAMETERS_H
