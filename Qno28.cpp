#include<iostream>
using namespace std;
int main ( ) {
    float a, b, c;
    cout<<"Enter values of a: "<<endl; ;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;
    cout<<"Enter value of c: "<<endl;
    cin>>c;
    float disc = b * b - 4*a*c;
    cout<<"Value of disc "<<disc<<endl;
    return 0;
}
