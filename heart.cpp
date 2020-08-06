#include<iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((((i > 0) && (i < 3)) && ((j == 0) || (j == 4))) || (((i == 0) || (i == 3)) && ((j == 1) || (j == 3))) || (((i == 1) || (i == 4)) && (j == 2)))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}