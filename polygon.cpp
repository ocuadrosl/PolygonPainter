#include "polygon.h"
#include <cmath>

Polygon::Polygon()
{

}

Polygon::Polygon(int radius, int sides, int centerX, int centerY):
    // comentar acá
    radius(radius),
    sides(sides),
    centerX(centerX),
    centerY(centerY)

{


}
void Polygon::setRadius(int radius)
{

    this->radius = radius;
}
void Polygon::setSides(int sides)
{
    this->sides = sides;

}

void Polygon::setCenter(int x, int y)
{

    centerX = x;
    centerY = y;

}

/*
Computing circle points using the parametric equation

*/

Polygon::qPointsT Polygon::compute() const
{
    qPointsT qPoints;

    const float pi = 3.14f;

    for (float t = 0.f; t < 2.f*pi; t+=(2.f*pi/sides))
    {
        int x = centerX + static_cast<int>(radius*std::cos(t));
        int y = centerY + static_cast<int>(radius*std::sin(t));

        qPoints.push_back(QPoint(x, y));

    }

    return qPoints;

}
