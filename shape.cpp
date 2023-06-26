#include "shape.h"

Shape::Shape(Vector3D dimensions):
    dimensions(dimensions)
{

}

const Vector3D &Shape::getDimensions() const
{
    return dimensions;
}

void Shape::setDimensions(const Vector3D &newDimensions)
{
    dimensions = newDimensions;
}

const double Shape::getRadius(char axis) const
{
    switch (axis) {
    case 'x':
        return this->dimensions.getX() / 2.0;
        break;
    case 'y':
        return this->dimensions.getY() / 2.0;
        break;
    case 'z':
        return this->dimensions.getZ() / 2.0;
        break;
    default:
        return -1.0;
        break;
    }
}
