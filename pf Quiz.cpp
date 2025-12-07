#include <iostream>
using namespace std;
int main ( ) {
    int numberofpassengers;
    float distancetravelled;
    float fare;
    float totalearnings;
    cout<<"Enter total number of passengers: "<<numberofpassengers<<endl;
    cin>>numberofpassengers;
    for(int i = 1;i <= numberofpassengers;i++) {
        cout<<"Distance Travelled by each Paseenger: "<<distancetravelled<<i+1<<"(km)"<<endl;
        cin>>distancetravelled;
        if(distancetravelled > 30(km)) {
            cout<<"Long Ride ";
        }else {
            cout<<"Normal Ride ";
        }
        fare = distancetravelled * 45;
        cout<<"Fair per passenger is: "<<fare<<i+1<<endl;
        totalearnings = +fare;
        cout<<Total Earning is<<totalearnings<<endl;
    }
    return 0;
}
