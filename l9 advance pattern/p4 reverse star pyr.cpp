#include <iostream>
using namespace std;

int main()
{
    int n, row, col;

    cout << "Kitne number ka pyramid pattern chaiye:" << endl;
    cin >> n;

    for (row = n; row >= 1; row--)
    {
        // spaces
        for (col = 1; col <= n - row; col++)
        {
            cout << " ";
        }

        // stars
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
