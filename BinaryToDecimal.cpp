#include <iostream>
#include <cmath>
using namespace std;
int BinaryToDecimal(int n)
{

    int Decimalno = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        Decimalno = Decimalno + bit * pow(2, i++);
        n = n / 10;
    }
    return Decimalno;
}
int main()
{
    int n;
    cin >> n;
    int Decimal = BinaryToDecimal(n);
    cout << Decimal << endl;
}