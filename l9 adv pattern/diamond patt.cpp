#include <iostream>
using namespace std;

int main()

{ int n,row,col ;
    
    cout<<"number of lines with diamond pattern :"<<endl;
    cin>>n;

    //https://youtu.be/rbkLls1_3IY?si=nKlkYjrL0mav3WgZ

     for ( row = 1; row <= n; row++)
    { // row variable is controlling number of rows
      // whereas column is controlling both space and star 
       
        for (col = n-r; col >= 1 ; col++)

        {
            cout << " ";
        } 
         for (col = 1; col <= row; col++)
        {
            cout << "*";
        }

cout<<endl;
        
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
 
        
//         cout << endl;

//     }
    
// //upper part of the pattern
//     for ( row = n; row >= 1; row--)
//     {
       
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";//print *
//         }

//         for (col = 1; col <= 2*n - 2*row ; col++)

//         {
//             cout << " ";
//         } 
        
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
 
        
//         cout << endl;

    // }
    
    return 0;
}