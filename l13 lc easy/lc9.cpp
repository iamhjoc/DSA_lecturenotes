#include <iostream>
using namespace std;

int main() {

    int x, num =x,rem,ans=0;
if(x<0)
return 0;

while(num)
{
    rem=num%10;
    num/=10;
    ans=ans*10 + rem;
};
if (ans==x)
return 1;
else
return 0;
}