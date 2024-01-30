#include <iostream>
#include <fstream>
#include <cmath>
#include "./headers/Line.h"
#include "./headers/Triangle.h"
#include "./headers/Square.h"
#include "./headers/Rectangle.h"
#include "./headers/Circle.h"
#include "./headers/Ellipse.h"
using namespace std;

int main()
{
    int choice;
    string fileName;

    do
    {
        cout << endl
             << "Select a shape: " << endl;
        cout << "1. Line\n2. Triangle\n3. Square\n4. Rectangle\n5. Circle\n6. Ellipse\n0. Exit\n"
             << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl
             << endl;
        if(choice==1)
        {

    
        
            double xCoord;
            double yCoord;
            Shapes2D::Point2D startPoint;

            cout << "Start Point Coordinates (x y): ";
            cout << startPoint.x() << " " << startPoint.y() << endl;
            cout << "Enter coordinates for end point: ";
            cin >> xCoord >> yCoord;
            Shapes2D::Point2D endPoint(xCoord, yCoord);

            Shapes2D::Line line(startPoint, endPoint);

            if (!line.areCoincident())
            {
                cout << "Line length: " << line.perimeter() << endl;
                line.plot();
            }
            else
            {
                cout << "Points are coincident, cannot form a line." << endl;
            }

        }
        else if(choice==2)
        {
            double side1, side2, side3;
            cout << "Enter all 3 side lengths for the triangle: ";
            cin >> side1 >> side2 >> side3;

            Shapes2D::Triangle tri(side1, side2, side3);
            if (!tri.areCollinear())
            {
                cout << "Triangle perimeter: " << tri.perimeter() << endl;
                cout << "Triangle area: " << tri.area() << endl;
                tri.plot();
            }
            else
            {
                cout << "The Points are collinear, cannot form a triangle." << endl;
            }
        }
        else if(choice==3)
        {
            double sideLength;
            cout << "Enter side length of the square: ";
            cin >> sideLength;

            Shapes2D::Square square(sideLength);
            cout << "Square perimeter: " << square.perimeter() << endl;
            cout << "Square area: " << square.area() << endl;
            square.plot();
        }
       else if(choice== 4)
        {
            double sideLength, sideBreadth;
            cout << "Enter length of the rectangle: ";
            cin >> sideLength;
            cout << "Enter breadth of the rectangle: ";
            cin >> sideBreadth;

            Shapes2D::Rectangle rectangle(sideLength, sideBreadth);
            cout << "Rectangle perimeter: " << rectangle.perimeter() << endl;
            cout << "Rectangle area: " << rectangle.area() << endl;
            rectangle.plot();
        }
       else if(choice==5)
        {
            double radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;

            Shapes2D::Circle circle(radius);
            cout << "Circle perimeter: " << circle.perimeter() << endl;
            cout << "Circle area: " << circle.area() << endl;
            circle.plot();
        }
        else if(choice== 6)
        {
            double majorRadius;
            double minorRadius;
            cout << "Enter majorRadius of the ellipse: ";
            cin >> majorRadius;
            cout << "Enter minorRadius of the ellipse: ";
            cin >> minorRadius;

            Shapes2D::Ellipse ellipse(majorRadius, minorRadius);
            cout << "Ellipse perimeter: " << ellipse.perimeter() << endl;
            cout << "Ellipse area: " << ellipse.area() << endl;
            ellipse.plot();
        }
       else if(choice==0)
        {
            cout << "Exit" << endl;
        }
    else{
            cout << "Invalid choice. Please try again!" << endl;
        }
       
        
    } while (choice != 0);

    return 0;
}