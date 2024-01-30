#include "../headers/Triangle.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
using namespace Shapes2D;

Triangle::Triangle(double side1, double side2, double side3) : mVertex1(0, 0), mVertex2(side1, 0),
                                                               mVertex3((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1),
                                                                        sqrt(side2 * side2 - pow((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1), 2)))
{
    cout << "Creating a Triangle - (Inherited from Shapee)" << endl;
}

Triangle::~Triangle()
{
}

double Triangle::area() // calculate area to check if Point2Ds are collinear
{
    return 0.5 * ((mVertex1.x() * (mVertex2.y() - mVertex3.y())) +
                  (mVertex2.x() * (mVertex3.y() - mVertex1.y())) +
                  (mVertex3.x() * (mVertex1.y() - mVertex2.y())));
}

bool Triangle ::areCollinear()
{
    return area() == 0;
}

void Triangle::plot()
{
    ofstream writeUserInputToFile;
    writeUserInputToFile.open("D:/rashmi_workspace/CPP/project2_GNUPlot/textFiles/triangle.txt", ofstream::trunc);

    if (writeUserInputToFile.is_open())
    {
        writeUserInputToFile << mVertex1.x() << " " << mVertex1.y() << "\n";
        writeUserInputToFile << mVertex2.x() << " " << mVertex2.y() << "\n";
        writeUserInputToFile << mVertex3.x() << " " << mVertex3.y() << "\n";
        writeUserInputToFile << mVertex1.x() << " " << mVertex1.y() << "\n";
        writeUserInputToFile.close();
        cout << "Data has been successfully written to the file - 'triangle.txt'." << endl;
    }
    else
    {
        cout << "Unable to open the file for writing." << endl;
    }
}

double Triangle::perimeter()
{
    double side1 = sqrt(pow(mVertex2.x() - mVertex1.x(), 2) + pow(mVertex2.y() - mVertex1.y(), 2));
    double side2 = sqrt(pow(mVertex3.x() - mVertex2.x(), 2) + pow(mVertex3.y() - mVertex2.y(), 2));
    double side3 = sqrt(pow(mVertex1.x() - mVertex3.x(), 2) + pow(mVertex1.y() - mVertex3.y(), 2));
    return side1 + side2 + side3;
}