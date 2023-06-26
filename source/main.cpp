#include <iostream>
#include <cmath>
#include "vector3d.h"
#include "object.h"
#include "formulas.h"

using namespace std;

int main()
{

    Vector3D v0 = Vector3D(0,0,0);
    Vector3D v1 = Vector3D(1,1,1);
    Vector3D v2 = Vector3D(5,7,-8);
    Vector3D v3 = Vector3D(4,-3,-2);
    Vector3D earthsDiameters = Vector3D(12742*pow(10,3),12742*pow(10,3),12742*pow(10,3));

//    Object obj_earth = Object("earth", (5.972*pow(10,24)), earthsDiameters);

//    double d1 = Formulas::gravitationalAcceleration(obj_earth);

    return 0;
}
