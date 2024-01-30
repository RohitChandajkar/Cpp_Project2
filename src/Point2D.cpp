#include "../headers/Point2D.h"
#include <iostream>
using namespace Shapes2D;

Point2D::Point2D()
{
    mX = 0.0;
    mY = 0.0;
}

Point2D::Point2D(double x, double y)
{
    mX = x;
    mY = y;
}

Point2D::~Point2D() {}

double Point2D::x() const
{
    return mX;
}

double Point2D::y() const
{
    return mY;
}