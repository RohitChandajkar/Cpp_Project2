#pragma once
#include "Point2D.h"
#include "Rectangle.h"

namespace Shapes2D
{
    class Square : public Rectangle
    {

    public:
        Square(double sideLength);
        ~Square();

        void plot() override;
        double perimeter() override;
        double area();

    private:
        double mSideLength;
    };
}
