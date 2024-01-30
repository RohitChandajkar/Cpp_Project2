#include "../headers/Square.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
using namespace Shapes2D;

Square::Square(double side) : Rectangle(side, side), mSideLength(side)
{
    cout << "Creating a Square - (Inherited from Rectangle)" << endl;
}

Square::~Square()
{
}

void Square::plot()
{
    ofstream writeUserInputToFile;
    writeUserInputToFile.open("D:/rashmi_workspace/CPP/project2_GNUPlot/textFiles/square.txt", ofstream::trunc);
    if (writeUserInputToFile.is_open())
    {
        Point2D origin;

        writeUserInputToFile << origin.x() << " " << origin.y() << "\n";
        writeUserInputToFile << mSideLength << " 0\n";
        writeUserInputToFile << mSideLength << " " << mSideLength << "\n";
        writeUserInputToFile << "0 " << mSideLength << "\n";
        writeUserInputToFile << origin.x() << " " << origin.y() << "\n";

        writeUserInputToFile.close();
        cout << "Data has been successfully written to the file - 'square.txt'." << endl;
    }
    else
    {
        cout << "Unable to open the file for writing." << endl;
    }
}

double Square::perimeter()
{
    return mSideLength * 4;
}

double Square::area()
{
    return mSideLength * mSideLength;
}