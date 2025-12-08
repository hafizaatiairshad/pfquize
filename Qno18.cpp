#include<iostream>
using namespace std;
int main ( ) {
    float vi = 2.5;
    float vf = 0;
    float t = 3.5;
    float a =(vf - vi) / t;
    float s = vi * t + 0.5 * a * t * t;
    cout<<"The value of s is "<<s;
    return 0;
}
