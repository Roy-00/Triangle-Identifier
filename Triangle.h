#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <vector>
#include "Point.h"
using namespace std;


class Triangle
{
    public:
        Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
        Triangle(Point v1, Point v2, Point v3);
        ~Triangle();

        double getPerimeter();
        string getType();

        void print();

    private:
        Point v1;
        Point v2;
        Point v3;
};

#endif // TRIANGLE_H
