#include <iostream>
using namespace std;
int main ( ) {
    float r;
    const double pi = 3.1417;
    cout<<"Enter Radius of circle: "<<r<<endl;
    cin>>r;
    float area = pi * r *r;
    cout<<"Area of circle is "<<area<<endl;
    float c = 2 * pi * r;
    cout<<"Circumference of circle is "<<c<<endl;
    return 0;
}
