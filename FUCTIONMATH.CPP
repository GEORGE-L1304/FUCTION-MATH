#include <iostream>
#include <cmath> // for M_PI constant

using namespace std;

// function to calculate the volume of a cylinder
double calculatecylindervolume(double radius,double height) {
return M_PI*pow(radius,2)*height;
}
int main (){
    double radius,height;
    // prompt the user to enter the radius and height
    cout<<"enter the height of the cylinder:";
    cin>>height;
    cout<<"enter the radius of the cylinder:"
    cin>>radius;
    // calculating and displaying the volume 
    duble volume=calculatecylindervolume(radius,height);
    cout<<"the volume of cylinder is :"<<volume <<"cubic units"<<endl;

    return 0;

}