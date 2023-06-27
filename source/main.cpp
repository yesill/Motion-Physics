#include <iostream>
#include <cmath>
#include "vector3d.h"
#include "object.h"
#include "shape.h"
#include "timeline.h"
#include "formulas.h"
#include <map>
#include <variant>

using namespace std;

int main()
{

    Vector3D v0 = Vector3D(0,0,0);
    Vector3D v1 = Vector3D(1,1,1);
    Vector3D v2 = Vector3D(5,7,-8);
    Vector3D v3 = Vector3D(4,-3,-2);
    Vector3D earthsDiameters = Vector3D(12742*pow(10,3),12742*pow(10,3),12742*pow(10,3));

//    (v1 - v3).printInfo();

//    std::map<int, int> map1 = {{0,0},{1,1},{2,2},{3,3},{7,84}};

//    std::cout << map1[7] << std::endl;

//    map1.insert({31,72});

//    std::cout << map1[31] << std::endl;

    Object obj1 = Object("object1", Timeline(Vector3D(0,0,0), Shape(Vector3D(12,12,12)), 96));

    std::cout << obj1.getTimeline().getTimeline().at(0).getMass() << std::endl;

    Object obj_earth = Object("earth", Timeline(Vector3D(0,0,0), Shape(Vector3D(12742*pow(10,3),12742*pow(10,3),12742*pow(10,3))), 5.972*pow(10,24)));
    double g1 = Formulas::gravitationalAcceleration(obj_earth);
    std::cout << "Grav Acc in Eart: " << g1 << endl;

    Object obj_jupiter = Object("jupiter", Timeline(Vector3D(0,0,0), Shape(Vector3D(139820*pow(10,3),139820*pow(10,3),139820*pow(10,3))), 1.898*pow(10,27)));
    double g2 = Formulas::gravitationalAcceleration(obj_jupiter);
    std::cout << "Grav Acc in Jupt: " << g2 << endl;

    Object obj_moon = Object("moon", Timeline(Vector3D(0,0,0), Shape(Vector3D(3474.8*pow(10,3),3474.8*pow(10,3),3474.8*pow(10,3))), 7.34767309*pow(10,22)));
    double g3 = Formulas::gravitationalAcceleration(obj_moon);
    std::cout << "Grav Acc in Moon: " << g3 << endl;

    return 0;
}
