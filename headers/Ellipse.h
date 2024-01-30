#pragma once
#include "Point2D.h"
#include "Shape.h"

namespace Shapes2D
{
    class Ellipse : public Shape
    {
    public:
        Ellipse(double majorRadius, double minorRadius);
        ~Ellipse();

        void plot() override;
        double perimeter() override;
        double area();

    private:
        double mMajorRadius;
        double mMinorRadius;
    };
}