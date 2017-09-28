//Brandon Roy 3/7/17
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <vector>
#include "Triangle.h"
using namespace std;

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3){
    v1.setXY(x1, y1);
    v2.setXY(x2, y2);
    v3.setXY(x3, y3);
}
Triangle::Triangle(Point v1, Point v2, Point v3){

}
Triangle::~Triangle(){
    //dtor
}
//*******************************************************************************************************
double Triangle::getPerimeter(){
    double getPerimeter_total = 0;
    getPerimeter_total = v1.distance(v2) + v2.distance(v3) + v1.distance(v3);
    return getPerimeter_total;
}
string Triangle::getType(){
    if (v1.distance(v2) == v2.distance(v3) && v1.distance(v2) == v1.distance(v3) && v2.distance(v3) == v1.distance(v3))
        return "Equilateral";
    if (v1.distance(v2) == v2.distance(v3) || v1.distance(v2) == v1.distance(v3) || v2.distance(v3) == v1.distance(v3))
        return "Isosceles";
    if (v1.distance(v2) != v2.distance(v3) && v1.distance(v2) != v1.distance(v3) && v2.distance(v3) != v1.distance(v3))
        return "Scalene";
}
//*******************************************************************************************************
void Triangle::print(){
    cout << "v1(" << v1.getX() << "," << v1.getY() << "), ";
    cout << "v2(" << v2.getX() << "," << v2.getY() << "), ";
    cout << "v3(" << v3.getX() << "," << v3.getY() << ")" << endl;
}
