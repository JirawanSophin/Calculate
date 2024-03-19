#include "Circle.h"
#include "math.h"
#include <iostream>
using namespace std;

int main(){
    
    cout << "66091270 KUNANON RIMDUSIT "<< endl;
    /*Circle circle2(7);

    circle1.cal_area();
    circle2.cal_area();
    cout << "Radius of A: " << circle1.get_radius() << " meters" << endl;
    cout << "Area of A: " << circle1.get_area() << " square meters" << endl;
    cout << "Radius of B: " << circle2.get_radius()  << " meters" << endl;
    cout << "Area of B: " << circle2.get_area() << " square meters" << endl;

    Circle circle3;
    circle3.cal_area_obj(circle2, circle1);
    cout << "Radius of C: " << circle3.get_total_radius()  << " meters" << endl;
    cout << "Area of C: " << circle3.get_area() << " square meters" << endl;
    */

    Circle c[2];
    
    for(int i = 0 ; i < 2; i++)
    {
        int a;
        cout << "Enter :" << endl;
        cin >> a;
        c[i].set_radius(a);
        c[i].cal_area();
        cout << "Radius of "<< i+1 <<": " << c[i].get_radius() << " meters" << endl;
        cout << "Area of "<< i+1 <<" : " << c[i].get_area() << " square meters" << endl;
    }
    

    // int arr[3] ;
    // arr[i] = a;
    // cout << "Show "<<arr[0] << endl;

    return 0;
}