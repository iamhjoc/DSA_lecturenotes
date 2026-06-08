#include <iostream>
using namespace std;

int main()
{
    //replace 5 with n in this code for general implementation of the pattern
    for (int row = 1; row <= 5; row++)//row bas number of lines control karega
    {
        // Space
        for (int col = 1; col <= 5 - row; col++)
        {
            cout << " ";
        }

        // Star
        for (int col = 1; col <= row; col++)//previous concept of pattern 
        {
            cout << "*";
        } 
// two for loops are used here because col control karta hai ki kya print hoga under star and space 
        cout << endl;
    }

    return 0;
}