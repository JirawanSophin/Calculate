#include "Circle.h"
#include "math.h"
#include <iostream>
using namespace std;

void Circle::set_radius(float radius)
{ 
    this -> radius = radius;
}

float Circle::get_radius()
{   
    return radius;
}

void Circle::cal_area()
{  if(radius > 0){
    area = M_PI*(radius*radius);}
    else{
        area = 0;
        cout << "Error : Radius Negative Value" << endl;
    }
}

float Circle::get_area()
{
    return area;
}

void Circle::cal_area_obj(Circle circle2, Circle circle1)
{
    total = circle1.radius + circle2.radius;
    if(total > 0){
        area = M_PI * (total * total);
    }
    else{
        area = 0;
        cout << "Error : Radius Negative Value" << endl;
    }
        
}

float Circle::get_total_radius()
{   
    return total;
}

