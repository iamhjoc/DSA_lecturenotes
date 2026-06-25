#include <iostream>
using namespace std;

int main()

{ int num ;
    cout<<"Enter the number you want to convert : ";
    cin  >>  num;
    int rem,ans=0,mul=1;
    while(num>0){
        
        rem=num%10;
//rem=num&1; this will also works same 
        num=num/10;
//num=num>>1;
          
        ans=rem*mul+ans;//main logic 
       
        mul=mul*2;
    }

    cout<<ans<<endl;


return 0;
}
 