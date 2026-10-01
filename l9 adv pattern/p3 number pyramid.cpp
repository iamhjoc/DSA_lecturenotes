#include <iostream>
using namespace std;

int main()

{ int n,row,col ;
    char a;
    cout<<"Kitne number ka pyramid pattern chaiye:"<<endl;
    cin>>n; 

    for ( row = 1; row <= n; row++)//row bas number of lines control karega
    {
       
        for (col = 1; col <=n - row; col++)
        {
            cout << " ";//space print hora
        }

        for (col = 1; col <= row ; col++)

        {
            cout << col <<"";
        } 
for (col = row - 1; col >= 1 ; col--)
        {
            cout << col <<"";
        } 
        cout << endl;
    }

    return 0;
}