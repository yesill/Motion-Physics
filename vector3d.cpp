#include "vector3d.h"

Vector3D::Vector3D(double x, double y, double z):X(x), Y(y), Z(z)
{

}

Vector3D Vector3D::operator+(const Vector3D & vector2)
{
    return Vector3D(
                    this->getX() + vector2.getX(),
                    this->getY() + vector2.getY(),
                    this->getZ() + vector2.getZ()
                );
}

Vector3D Vector3D::operator+(const double scaler)
{
    return Vector3D(
                    this->getX() + scaler,
                    this->getY() + scaler,
                    this->getZ() + scaler
                );
}

Vector3D Vector3D::operator-(const Vector3D & vector2)
{
    return Vector3D(
                    this->getX() - vector2.getX(),
                    this->getY() - vector2.getY(),
                    this->getZ() - vector2.getZ()
                );
}

Vector3D Vector3D::operator-(const double scaler)
{
    return Vector3D(
                    this->getX() - scaler,
                    this->getY() - scaler,
                    this->getZ() - scaler
                );
}

Vector3D Vector3D::operator*(const Vector3D & vector2)
{
    return Vector3D(
                    this->getX() * vector2.getX(),
                    this->getY() * vector2.getY(),
                    this->getZ() * vector2.getZ()
                );
}

Vector3D Vector3D::operator*(const double scaler)
{
    return Vector3D(
                    this->getX() * scaler,
                    this->getY() * scaler,
                    this->getZ() * scaler
                );
}

Vector3D Vector3D::operator/(const Vector3D & vector2)
{
    return Vector3D(
                    this->getX() / vector2.getX(),
                    this->getY() / vector2.getY(),
                    this->getZ() / vector2.getZ()
                );
}

Vector3D Vector3D::operator/(const double scaler)
{
    return Vector3D(
                    this->getX() / scaler,
                    this->getY() / scaler,
                    this->getZ() / scaler
                );
}

bool Vector3D::operator==(const Vector3D & vector2) const
{
    if(this->X == vector2.X && this->Y == vector2.Y && this->Z == vector2.Z )
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Vector3D::printInfo() const
{
    std::cout << "(" << this->X << "," << this->Y << "," << this->Z << ")";
}

double Vector3D::getX() const
{
    return X;
}

void Vector3D::setX(double newX)
{
    X = newX;
}

double Vector3D::getY() const
{
    return Y;
}

void Vector3D::setY(double newY)
{
    Y = newY;
}

double Vector3D::getZ() const
{
    return Z;
}

void Vector3D::setZ(double newZ)
{
    Z = newZ;
}
