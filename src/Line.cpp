#include "../headers/Line.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
using namespace Shapes2D;

Line::Line(Shapes2D::Point2D &s, Shapes2D::Point2D &e)
{
    mStartPoint = s;
    mEndPoint = e;
    cout << "Creating a Line - (Inherited from Shape)" << endl;
}

Line::~Line()
{
}

bool Line ::areCoincident()
{
    if (mStartPoint.x() == mEndPoint.x() && mStartPoint.y() == mEndPoint.y())
    {
        return true;
    }
    return false;
}

void Line::plot()
{
    ofstream writeUserInputToFile;
    writeUserInputToFile.open("D:/rashmi_workspace/CPP/project2_GNUPlot/textFiles/line.txt", ofstream::trunc);

    if (writeUserInputToFile.is_open())
    {
        writeUserInputToFile << mStartPoint.x() << " " << mStartPoint.y() << "\n";
        writeUserInputToFile << mEndPoint.x() << " " << mEndPoint.y() << "\n";
        writeUserInputToFile.close();
        cout << "Data has been successfully written to the file - 'line.text'." << endl;
    }
    else
    {
        cout << "Unable to open the file for writing." << endl;
    }
}

double Line::perimeter()
{
    return sqrt(pow(mEndPoint.x() - mStartPoint.x(), 2) + pow(mEndPoint.y() - mStartPoint.y(), 2));
}