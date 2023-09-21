// Count all set bits of n
#include <iostream>
using namespace std;
void CountSetBits(int N)
{
    int Bit = 0, Count = 0;
    while (N > 0)
    {
        Bit = N % 2;
        if (Bit == 1)
        {
            Count++;
        }
        N = N / 2;
    }

    cout << "The number of set bits present " << Count;
}
int main()
{
    int N;
    cout << "Enter value of N : ";
    cin >> N;
    CountSetBits(N);

    return 0;
}