#include<iostream>
using namespace std;
int main ( ) {
    double realnumber = 15.58971;
    int integralpart = 15;
	double fractionalpart = realnumber - integralpart;                           
    cout<<"Integral Part of real Number: "<<integralpart<<endl;
    cout<<"Fractional Part of real Number: "<<fractionalpart;
    return 0;
}
