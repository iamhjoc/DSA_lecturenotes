#include <iostream>
using namespace std;

int main()
{
    for(int row = 1; row<=5;row ++){
    for (int col = 5; col >= 1 ; col--)
    {
        cout<<col<<"_";
        
    } 
    cout<<endl;
        
    }

    return 0;
}