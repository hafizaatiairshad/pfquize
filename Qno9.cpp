#include <iostream>
 using namespace std;
int main ( ) {
    int num1,num2,num3,num4;
    cout<<"Enter the value of  four Numbers: ";
    cin>>num1>>num2>>num3>>num4;
    int maximum = num1;
    
    if( num2 > maximum) 
      maximum = num2;
      if (num3 > maximum ) 
       maximum = num3;
      
	  if(num4 > maximum) 
     maximum = num4;	
   cout<<"Maximum Number is: "<<maximum<<endl;
    
   
    return 0;
}
