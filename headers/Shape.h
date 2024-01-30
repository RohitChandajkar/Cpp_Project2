#pragma once
namespace Shapes2D
{
    class Shape
    {
    public:
        Shape();
        ~Shape();

    protected:
        virtual void plot() = 0;
        virtual double perimeter() = 0;
    };
}