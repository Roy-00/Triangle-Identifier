//Brandon Roy 3/7/17
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

Point::Point(){
    x = 0;
    y = 0;
}
Point::Point(int x, int y){
    setX(x);
    setY(y);
}
Point::~Point(){
    //dtor
}
//*******************************************************************************************************
void Point::setX(int x){
    this->x = x;
}
void Point::setY(int y){
    this->y = y;
}
void Point::setXY(int x, int y){
    this->x = x;
    this->y = y;
}
//*******************************************************************************************************
int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}
void Point::getXY(int coordinates[2]){
    coordinates[0] = x;
    coordinates[1] = y;
}
double Point::distance(int x, int y){
    return sqrt(pow(x - this->x, 2) + pow(y - this->y, 2));
}
double Point::distance(Point another){
    return sqrt(pow(another.getX() - this->x, 2) + pow(another.getY() - this->y, 2));
}
double Point::distance(){
    return sqrt(pow(x - 0, 2) + pow(y - 0, 2));
}
//*******************************************************************************************************
void Point::print(){
    cout << "(" << x << "," << y << ")";
}
