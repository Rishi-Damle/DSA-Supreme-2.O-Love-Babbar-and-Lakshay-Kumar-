#include <iostream>
using namespace std;
int main()
{
    int n;
    int row, col;
    int var = col + 1;
    cout << "Enter valu of n :";
    cin >> n;
    for (row = 0; row < n; row++)
    {
        for (col = row + 1; col <= (n); col++)
        {
            if (col == row + 1 || col == n || row == 0)
            {
                cout << col;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}
