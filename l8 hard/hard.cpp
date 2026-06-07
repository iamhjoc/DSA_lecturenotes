#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        // Space
        for (int col = 1; col <= 5 - row; col++)
        {
            cout << " ";
        }

        // Star
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}