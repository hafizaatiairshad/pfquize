 #include <iostream>
 using namespace std;
int main ( ) { 
    int rollNo;
    cout<<"Enter the Roll No of a studenr: "<<rollNo;
    cin>>rollNo;
    cout<<"Each Subject has Total 100 Marks: "<<endl;
    int pf,ict,cg;
    cout<<"Enter  marks obtained in Programming Fundamental: "<<pf;
    cin>>pf;
    cout<<"Enter marks Obtained in Introduction to Computing: "<<ict;
    cin>>ict;
    cout<<"Enter Marks Obtained in Computer Graphics: "<<cg;
    cin>>cg;
    int total; 
    total = pf +ict + cg;
    cout<<"Total Marks: "<<total<<endl;
    int average;
    average = total/3;
    cout<<"Average of Total Marks: "<<average<<endl;
    return 0;
}
