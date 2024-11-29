#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double degree){
    return degree * 0.0174532925;
}
double rad2deg(double radian){
    return radian * 57.2957795;
}

double findXComponent(double lenght1,double lenght2,double degree1,double degree2){
    return (lenght1 * cos(degree1)) + (lenght2 * cos(degree2));
}

double findYComponent(double lenght1,double lenght2,double degree1,double degree2){
    return (lenght1 * sin(degree1)) + (lenght2 * sin(degree2));
}

double pythagoras(double vecx,double vecy){
    return sqrt((vecx * vecx) + (vecy * vecy));
}

void showResult(double veclenght,double vecresult){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << veclenght << endl;
    cout << "Direction of the resultant vector (deg) = " << vecresult << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
