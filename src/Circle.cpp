#include "../headers/Circle.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
using namespace Shapes2D;

Circle::Circle(double radius) : Ellipse(radius, radius), mRadius(radius)
{
    cout << "Creating a Circle - (Inherited from Ellipse)" << endl;
}

Circle::~Circle()
{
}

void Circle::plot()
{
    int numOfPoints = 250;
    ofstream writeUserInputToFile;
    writeUserInputToFile.open("D:/rashmi_workspace/CPP/project2_GNUPlot/textFiles/circle.txt", ofstream::trunc);

    if (writeUserInputToFile.is_open())
    {
        for (int i = 0; i < numOfPoints; ++i)
        {
            Point2D origin;

            double angleTheta = 2.0 * M_PI * i / numOfPoints;
            double x = origin.x() + mRadius * cos(angleTheta);
            double y = origin.y() + mRadius * sin(angleTheta);
            writeUserInputToFile << x << " " << y << " " << mRadius << std::endl;
        }
        writeUserInputToFile.close();
        cout << "Data has been successfully written to the file - 'circle.txt'." << endl;
    }
    else
    {
        cout << "Unable to open the file for writing." << endl;
    }
}

double Circle::perimeter()
{
    return 2 * M_PI * mRadius;
}

double Circle::area()
{
    return M_PI * mRadius * mRadius;
}