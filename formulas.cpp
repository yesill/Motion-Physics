#include "formulas.h"


double Formulas::gravitationalAcceleration(Object obj)
{
    return (gravitational_constant * obj.getMass()) / pow(obj.getRadius('x'),2);
}
