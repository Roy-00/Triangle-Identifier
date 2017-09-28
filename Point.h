//Brandon Roy 3/7/17
#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

class Point
{
    public:
        Point();
        Point(int x, int y);
        ~Point();

        int getX();
        int getY();
        void getXY(int coordinates[2]);
        double distance(int x, int y);
        double distance(Point another);
        double distance();

        void setX(int x);
        void setY(int y);
        void setXY(int x, int y);

        void print();

    private:
        int x = 0;
        int y = 0;
};
#endif // POINT_H
