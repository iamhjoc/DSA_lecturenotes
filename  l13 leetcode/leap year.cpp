#include <iostream>
using namespace std;

int main() {
    int y;
    cout<<"Enter the year : ";
    cin>>y;

    if(y%400==0 )
    { 
        cout<<"your entered number is a leap year";
    }
    else if( y%4==0 && y%100  !=  0) {
     
         cout<<"your entered number is a leap year";
    }
    
    else{
        cout<<"not a leap year";
    }
    return 0;
}