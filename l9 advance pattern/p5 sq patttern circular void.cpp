#include <iostream>
using namespace std;

int main()

{ int n,row,col ;
    
    cout<<"number of square pattern  with circular void :"<<endl;
    cin>>n;

    for ( row = n; row >= 1; row--)
    {
       
        for (col = 1; col <= row; col++)
        {
            cout << "*";//print *
        }

        for (col = 1; col <= 2*n - 2*row ; col++)

        {
            cout << " ";//space
        } 
        
        for (col = 1; col <= row; col++)
        {
            cout << "*";//print *
        }
 
        cout << endl;
    }

    return 0;
}