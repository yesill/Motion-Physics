#ifndef KINEMATICS_H
#define KINEMATICS_H
#include "vector3d.h"


class Kinematics
{
private:
    Vector3D acceleration, velocity;
public:
    Kinematics(Vector3D acceleration, Vector3D velocity);
    const Vector3D &getAcceleration() const;
    void setAcceleration(const Vector3D &newAcceleration);
    const Vector3D &getVelocity() const;
    void setVelocity(const Vector3D &newVelocity);
};

#endif // KINEMATICS_H
