#include <iostream>
using namespace std;
int main ( ) {
    int numberofpassengers;
    float distancetravelled;
    float fare;
    float totalearnings;
    cout<<"Enter total number of passengers: ";
    cin>>numberofpassengers;
    for(int i = 1;i <= numberofpassengers;i++) {
        cout<<"Distance Travelled by  Paseenger: " <<i<< "(km): ";
        cin>>distancetravelled;
        if(distancetravelled > 30) {
            cout<<"Long Ride ";
        }else {
            cout<<"Normal Ride ";
        }
        fare = distancetravelled * 45.0;
        cout<<"Fair per passenger is: "<<fare<<endl;
        totalearnings += fare;
    }
        cout<<"Total Earning is: "<<totalearnings;
    
    return 0;
}
