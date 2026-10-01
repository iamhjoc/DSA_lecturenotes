#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"kitne number ka pattern chaiye likh "<<endl;
    cin>>n;

    for (int row = 1; row <= n; row++)
    {
        // spaces
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }

        // stars
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}