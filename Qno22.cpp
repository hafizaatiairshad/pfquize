#include<iostream>
using namespace std;
int main ( ) {
   string name,gender;
   int age;
   float height;
   cout<<"Enter Name of Student: ";
   getline(cin,name);
   cout<<"Enter Gender of Student: ";
   getline(cin,gender);
   cout<<"Enter Age of Student: ";
   cin>>age ;
   cout<<"Enter Height of Student(in cm): ";
   cin>>height;
   cout<<"Data of Student "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Height: "<<height<<"cm"<<endl;
    cout<<"Gender: "<<gender<<endl;
    return 0;
}
