#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int row = 1; row < n; row++)
    {
        int k = 1;
        for (int col = 1; col <= row; col++)
        {
            cout << k << " ";
            k = k * (row - col) / col;
        }
        cout << endl;
    }
}