#ifndef SHAPE_H
#define SHAPE_H
#include "vector3d.h"


class Shape
{
private:
    Vector3D dimensions;
public:
    Shape(Vector3D dimensions);
    const Vector3D &getDimensions() const;
    void setDimensions(const Vector3D &newDimensions);
    const double getRadius(char axis) const;
};

#endif // SHAPE_H
