#include <iostream>
using namespace std;

void Swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
void Swap(float &c,float &d)//fun overload = same fun but with diff parameter
{
    float r=c;
    c=d;
    d=r;
}
int main() {
    int a,b;
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
float f1=8.8,f2=1.6;
Swap(f1,f2);
cout<<f1<<" "<<f2;
    return 0;
}
