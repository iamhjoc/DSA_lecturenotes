#include <iostream>
int n ,i;
using namespace std;
bool prime(int n);//parameters
int main() {
    cout << "n : " ;
    cin>>n;
   if (n<2)   {

   return 0;
 cout<<"non prime";

}
    for(i=2 ;i<n ; i++)
    {
        if(n%i==0)   {
cout<<"non prime";
 return 0;
 }

}
cout<<"prime";
return 0;

}
