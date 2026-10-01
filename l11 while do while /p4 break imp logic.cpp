#include <iostream>
using namespace std;

int main()

{ int x,n ;
    cout<<"till which number : ";
    cin>>n;
    cout<<"where you have to stop : ";
    cin>>x;
    int i = 1;
    while(i<=n)
    {
        if(i==x)
        break;
        cout<<i;
        cout<<endl;
        i++;
      
  
    }





return 0;
}