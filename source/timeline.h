#ifndef TIMELINE_H
#define TIMELINE_H
#include <map>
#include "parameters.h"
#include "vector3d.h"


class Timeline
{
private:
    int* timestamps;
    Vector3D* positions;
    double* mass;
    Parameters* parameters;
    Vector3D* shapes;
public:
    Timeline(
        int* timestamps,
        Vector3D* positions,
        double* mass,
        Parameters* parameters,
        Vector3D* shapes
    );
    int *getTimestamps() const;
    void setTimestamps(int *newTimestamps);
    Vector3D *getPositions() const;
    void setPositions(Vector3D *newPositions);
    double *getMass() const;
    void setMass(double *newMass);
    Parameters *getParameters() const;
    void setParameters(Parameters *newParameters);
    Vector3D *getShapes() const;
    void setShapes(Vector3D *newShapes);
};

#endif // TIMELINE_H
