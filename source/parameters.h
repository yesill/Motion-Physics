#ifndef PARAMETERS_H
#define PARAMETERS_H
#include "vector3d.h"


class Parameters
{
private:
    Vector3D acceleration, velocity;
public:
    Parameters(Vector3D acceleration, Vector3D velocity);
    const Vector3D &getAcceleration() const;
    void setAcceleration(const Vector3D &newAcceleration);
    const Vector3D &getVelocity() const;
    void setVelocity(const Vector3D &newVelocity);
};

#endif // PARAMETERS_H
