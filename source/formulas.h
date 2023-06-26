#ifndef FORMULAS_H
#define FORMULAS_H
#include <cmath>
#include "object.h"


class Formulas
{
private:
    static constexpr double  gravitational_constant = 6.67430 * 0.00000000001;
public:
    static double gravitationalAcceleration(Object obj);
};

#endif // FORMULAS_H
