#include <iostream>
using namespace std;

int main()

{ int n,row,col ;
    
    cout<<"number of square pattern  with circular void :"<<endl;
    cin>>n;

    //lower part of the pattern

     for ( row = 1; row <= n; row++)
    {
       
        for (col = 1; col <= row; col++)
        {
            cout << "*";
        }

        for (col = 1; col <= 2*n - 2*row ; col++)

        {
            cout << " ";
        } 
        
        for (col = 1; col <= row; col++)
        {
            cout << "*";
        }
 
        
        cout << endl;

    }
    
//upper part of the pattern
    for ( row = n; row >= 1; row--)
    {
       
        for (col = 1; col <= row; col++)
        {
            cout << "*";//print *
        }

        for (col = 1; col <= 2*n - 2*row ; col++)

        {
            cout << " ";
        } 
        
        for (col = 1; col <= row; col++)
        {
            cout << "*";
        }
 
        
        cout << endl;

    }
    
    return 0;
}