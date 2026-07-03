#include <iostream>
using namespace std;

int main() {
    int n,ans=0,mul=1,rem;
    cout<<"Enter :";
    cin>>n;
    if(n==0)
    return 1;
    while(n){
        rem=n%2;
        rem=rem^1;
        n/=2;
        ans=ans+rem*mul;
        mul*=2;
    }
    cout<<ans;
    
    return 0;
}