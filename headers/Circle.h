#pragma once
#include "Point2D.h"
#include "Ellipse.h"

namespace Shapes2D
{
    class Circle : public Ellipse
    {
    public:
        Circle(double radius);
        ~Circle();

        void plot() override;
        double perimeter() override;
        double area();

    private:
        double mRadius;
    };
}
