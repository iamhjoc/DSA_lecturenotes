#include <iostream>
using namespace std;

int main()
{ int n,row,col ;
    char a;
    cout<<"Kitne number ka pattern chaiye:"<<endl;
    cin>>n;

    for ( row = 1; row <= n; row++)//row bas number of lines control karega
    {
       
        for (col = 1; col <=n - row; col++)
        {
            cout << " ";//space print hora
        }

        
        for (char name = a  ; name <= 'a'+row-1 ; name++)//previous concept of pattern 
        {
            cout << name;
        } 
// two for loops are used here because col control karta hai ki kya print hoga under star and character abcde..... 
        cout << endl;
    }

    return 0;
}