// Reverse all the digits of a number (N)
#include <iostream>
using namespace std;
void Reverse(int N)
{
    int rem = 0;
    int ReverseF = 0;
    while (N > 0)
    {
        rem = N % 10;
        ReverseF = (ReverseF * 10) + rem;
        N = N / 10;
    }
    cout << "Reverse of the " << N << " is " << ReverseF;
}
int main()
{
    int N;
    cout << "Enter value of n :";
    cin >> N;
    Reverse(N);
}
