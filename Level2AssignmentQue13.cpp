// print all prime numbers from 1 to N
#include <iostream>
using namespace std;
bool PrintPrime(int N)
{

    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int N;
    cout << "Enter a value of N :";
    cin >> N;
    for (int i = 1; i < N; i++)
    {
        bool isprime = PrintPrime(i);
        if (isprime)
        {
            cout << i << " ";
        }
    }

    return 0;
}