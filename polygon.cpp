#include "polygon.h"
#include <cmath>

Polygon::Polygon()
{

}

Polygon::Polygon(int radius, int sides, int centerX, int centerY):
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


Polygon::qPointsT Polygon::compute() const
{
    qPointsT qPoints;

    const float pi = 3.14f;

    for (float t = 0.f; t < 2*pi; t+=(2*pi/sides))
    {
        int x = centerX + static_cast<int>(std::ceil(radius*std::cos(t)));
        int y = centerY + static_cast<int>(std::ceil(radius*std::sin(t)));

        qPoints.push_back(QPoint(x, y));

    }

    return qPoints;

}
