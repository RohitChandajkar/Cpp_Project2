#pragma once
namespace Shapes2D
{
    class Point2D
    {
    public:
        Point2D();
        Point2D(double x, double y);
        ~Point2D();

        double x() const;
        double y() const;

    private:
        double mX;
        double mY;
    };
}