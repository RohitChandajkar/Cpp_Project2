#include "../headers/Ellipse.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
using namespace Shapes2D;

Ellipse::Ellipse(double majorRadius, double minorRadius) : mMajorRadius(majorRadius), mMinorRadius(minorRadius)
{
    cout << "Creating an Ellipse - (Inherited from Shape)" << endl;
}

Ellipse::~Ellipse()
{
}

void Ellipse::plot()
{
    int numOfPoints = 250;
    ofstream writeUserInputToFile;
    writeUserInputToFile.open("D:/rashmi_workspace/CPP/project2_GNUPlot/textFiles/Ellipse.txt", ofstream::trunc);

    if (writeUserInputToFile.is_open())
    {
        for (int i = 0; i < numOfPoints; ++i)
        {
            Point2D origin;

            double angleTheta = 2.0 * M_PI * i / numOfPoints;
            double x = origin.x() + mMajorRadius * cos(angleTheta);
            double y = origin.y() + mMinorRadius * sin(angleTheta);
            writeUserInputToFile << x << " " << y << " " << mMajorRadius << " " << mMinorRadius << std::endl;
        }
        writeUserInputToFile.close();
        cout << "Data has been successfully written to the file - 'Ellipse.txt'." << endl;
    }
    else
    {
        cout << "Unable to open the file for writing." << endl;
    }
}

double Ellipse::perimeter()
{
    return 2 * M_PI * sqrt(((mMajorRadius * mMajorRadius) + (mMinorRadius * mMinorRadius)) / 2);
}

double Ellipse::area()
{
    return M_PI * mMajorRadius * mMinorRadius;
}