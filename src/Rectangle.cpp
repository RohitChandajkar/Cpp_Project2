#include "../headers/Rectangle.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
using namespace Shapes2D;

Rectangle::Rectangle(double length, double breadth) : mSideLength(length), mSideBreadth(breadth)
{
    cout << "Creating a Rectangle - (Inherited from Shape)" << endl;
}
Rectangle::~Rectangle()
{
}

void Rectangle::plot()
{
    ofstream writeUserInputToFile;
    writeUserInputToFile.open("D:/rashmi_workspace/CPP/project2_GNUPlot/textFiles/rectangle.txt", ofstream::trunc);

    if (writeUserInputToFile.is_open())
    {
        Point2D origin;
        writeUserInputToFile << origin.x() << " " << origin.y() << "\n";
        writeUserInputToFile << mSideLength << " 0\n";
        writeUserInputToFile << mSideLength << " " << mSideBreadth << "\n";
        writeUserInputToFile << "0 " << mSideBreadth << "\n";
        writeUserInputToFile << origin.x() << " " << origin.y() << "\n";

        writeUserInputToFile.close();
        cout << "Data has been successfully written to the file - 'rectangle.txt'." << endl;
    }
    else
    {
        cout << "Unable to open the file for writing." << endl;
    }
}

double Rectangle::perimeter()
{
    return 2 * (mSideLength + mSideBreadth);
}

double Rectangle::area()
{
    return mSideLength * mSideBreadth;
}