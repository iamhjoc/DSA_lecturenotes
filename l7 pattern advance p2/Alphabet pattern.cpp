#include <iostream>
using namespace std;

int main()

{    //int row = 0;
    //char name = 'a'+ row -1; row is intialise by 0 so 97 + 0 -1 = 96 which is ' in ascii soit will print '
    for ( int row = 1; row <= 5; row++)
    { char name = 'a'+ row -1;
        for (int col = 1; col <= row; col++)
        {
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}
 