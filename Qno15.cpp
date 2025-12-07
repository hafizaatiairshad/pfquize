#include<iostream>
using namespace std;
int main ( ) {
    int a = 7, b = 9, c;
    c = a;
    a = b;
    b = c;
    cout<<"Value of a after interchanging: "<<a<<endl;
     cout<<"Value of b after interchanging: "<<b<<endl;
    return 0;
}
