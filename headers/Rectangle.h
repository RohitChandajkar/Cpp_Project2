#pragma once
#include "Point2D.h"
#include "Shape.h"

namespace Shapes2D
{
    class Rectangle : public Shape
    {
    public:
        Rectangle(double sideLength, double sideBreadth);
        ~Rectangle();

        void plot() override;
        double perimeter() override;
        double area();

    private:
        double mSideLength;
        double mSideBreadth;
    };
}