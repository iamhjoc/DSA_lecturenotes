#include <iostream>
using namespace std;

int main()
{ int n  ;
    cout<<"Kitne number ka pattern chaiye:"<<endl;
    cin>>n;

    for (int row = 1; row <= n; row++)//row bas number of lines control karega
    {
       
        for (int col = 1; col <=n - row; col++)
        {
            cout << " ";
        }

        
        for (int col = 1; col <= row; col++)//previous concept of pattern 
        {
            cout << col;// agar number change karane hai toh
           // cout << row ;// agar number change nahi karane hai toh
        } 
// two for loops are used here because col control karta hai ki kya print hoga under star and space 
        cout << endl;
    }

    return 0;
}