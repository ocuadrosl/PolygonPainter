#ifndef POLYGON_H
#define POLYGON_H
#include <QPoint>
#include <vector>
#include <iostream>

/*
Polygon class
@author Oscar

*/
class Polygon
{
    using qPointsT = std::vector<QPoint>;
public:
    Polygon();
    Polygon(int radius, int sides, int centerX, int centerY);

    void setRadius(int radius);
    void setSides(int sides);
    void setCenter(int x, int y);

    // const because this does not modify member variables
    qPointsT compute() const ;

private:
    int radius;
    int sides;
    int centerX;
    int centerY;
};

#endif // POLYGON_H
