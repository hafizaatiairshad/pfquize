#include<iostream>
using namespace std;
int main ( ) {
    int pf, ict, dst,pc,fe;
    cout<<"Each subject has weightage of 100 marks "<<endl;
    cout<<"Enter marks of Programming Fundamentals "<<pf<<endl;;
    cin>>pf;
    cout<<"Enter marks of ICT "<<ict<<endl;
    cin>>ict;
    cout<<"Enter marks of Discrete Structures "<<dst<<endl;;
    cin>>dst;
    cout<<"Enter marks of Pre Calculas  "<<pc<<endl;
    cin>>pc;
    cout<<"Enter marks of Functional English "<<fe<<endl;
    cin>>fe;
    int totalMarks = pf + ict + dst + pc + fe;
    cout<<"Total Marks out of 500 is "<<totalMarks<<endl;
    int average = totalMarks/5;
    cout<<"Average Marks is "<<average<<endl;
    return 0;
}
