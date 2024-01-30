#pragma once
#include "Point2D.h"
#include "Shape.h"

namespace Shapes2D
{
    class Triangle : public Shape
    {
    public:
        Triangle(double side1, double side2, double side3);
        ~Triangle();

        double area();
        bool areCollinear();
        void plot() override;
        double perimeter() override;

    private:
        Point2D mVertex1;
        Point2D mVertex2;
        Point2D mVertex3;
    };
}