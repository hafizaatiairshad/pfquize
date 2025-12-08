#include<iostream>
using namespace std;
int main ( ){
    float a, b, c;
    cout<<"Enter values of a: "<<endl; ;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;
    cout<<"Enter value of c: "<<endl;
    cin>>c;
    float s = (a+b+c)/2;
    float area = s*(s - a)*(s - b)*(s - c);
    float areaoftriangle = area/2;
    cout<<"Area of Triangle is "<<areaoftriangle<<endl;
    return 0;
}
