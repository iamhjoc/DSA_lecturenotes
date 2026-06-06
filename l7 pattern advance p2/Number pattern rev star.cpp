#include <iostream>
using namespace std;

int main()
{
    for (int row = 5; row >=1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
//cout << row << " "; 5 5 time print hoga row change nahi hoti
cout << col << " ";//col change hota rehta hai 
            
        }
        cout << endl;
    }

    return 0;
}