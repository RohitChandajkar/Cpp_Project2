#pragma once
#include "Point2D.h"
#include "Shape.h"

namespace Shapes2D
{
    class Line : public Shape
    {
    public:
        Line(Point2D &s, Point2D &e);
        ~Line();
        bool areCoincident();
        void plot() override;
        double perimeter() override;

    private:
        Point2D mStartPoint;
        Point2D mEndPoint;
    };
}
