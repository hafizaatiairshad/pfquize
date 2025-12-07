#include <iostream>
# define PI 3.1417
using namespace std;
int main ( ) {
    
    double radius, area;
    cout<<"Enter the value of radius: ";
    cin>>radius;
    area = PI * radius * radius;
    cout<<"Area of circle is: "<<area;
    return 0;
}
