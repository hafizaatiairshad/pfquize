#include<iostream>
using namespace std;
int main ( ) {
    int hours ,minutes;
    cout<<"enter hours: ";
    cin>>hours;
    int hoursintoseconds = 3600 * hours;
    cout<<"Hours into Seconds "<<hoursintoseconds<<endl;
    cout<<"Enter Minutes: ";
    cin>>minutes;
    int minutesintoseconds = 60 * minutes;
    cout<<"Minutes into Seconds "<<minutesintoseconds<<endl;
    return 0;
}
