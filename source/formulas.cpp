#include "formulas.h"


double Formulas::gravitationalAcceleration(Object object)
{
    return (gravitational_constant * object.getTimeline().getTimeline().at(0).getMass()) / pow(object.getTimeline().getTimeline().at(0).getShape().getRadius('x'),2);
}
