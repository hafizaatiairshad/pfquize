#include<iostream>
using namespace std;
int main ( ) {
    int f;
    cout<<"Enter the Temperature in Ferhanite: ";
    cin>> f;
    float c = (f - 32)* 5.0 / 9.0;
    cout<<"Temperature in Degree celsius is: "<<c<<endl;
    return 0;
}
