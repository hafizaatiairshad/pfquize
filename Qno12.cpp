#include<iostream>
using namespace std;
int main ( ) {
    const double pi = 3.1417;
    double r;
    cout<<"Enter the radius of cylinder: ";
    cin>>r;
    double h;
    cout<<"Enter the height of cylinder: ";
    cin>>h;
    double v = pi * r * r * h;
    cout<<" the volume of cylinder is "<<v<<endl;
    
    return 0;
}
