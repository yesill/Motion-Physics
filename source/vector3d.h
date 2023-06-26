#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>


class Vector3D
{
public:
    Vector3D(double, double, double);
    Vector3D operator+(const Vector3D&);
    Vector3D operator+(const double scaler);
    Vector3D operator-(const Vector3D&);
    Vector3D operator-(const double scaler);
    Vector3D operator*(const Vector3D&);
    Vector3D operator*(const double scaler);
    Vector3D operator/(const Vector3D&);
    Vector3D operator/(const double scaler);
    bool operator==(const Vector3D&) const;
    void printInfo() const;

    double getX() const;
    void setX(double newX);

    double getY() const;
    void setY(double newY);

    double getZ() const;
    void setZ(double newZ);

private:
    double X, Y, Z;
};

#endif // VECTOR3D_H
