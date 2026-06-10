#include <iostream>
using namespace std;

int main()

{ int n,row,col ;
    char a;
    cout<<"Kitne number ka pyramid pattern chaiye:"<<endl;
    cin>>n;

    for ( row = n; row <= 1; row++)//row bas number of lines control karega
    {
       
        for (col = 1; col <=n - row; col++)
        {
            cout << " ";//space print hora
        }

        for (col = 1; col <=2*row - 1 ; col++)

        {
            cout << "*" <<"";
        } 
 
        cout << endl;
    }

    return 0;
}