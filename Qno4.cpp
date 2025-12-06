#include<iostream>
using namespace std;
int main ( ) {
    int a = 2,b = 3,c;
    c = a;
    a = b;
    b = c;
    cout<<"The Value of a  after interchanging: "<<a<<endl;
    cout<<"The Value of b after interchanging: "<<b<<endl;
    return 0;
}
