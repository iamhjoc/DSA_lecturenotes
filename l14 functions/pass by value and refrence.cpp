#include <iostream>
using namespace std;
//void swap(int  a , int b) by value
void swap(int & a , int &b)//refrence
{
    //int temp,a,b; why this giving the error
int temp=a;
a=b;
b=temp;
    }
int main() {
    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" ";
    
    return 0;
}