// factorial of a number
#include <iostream>
using namespace std;
int FactFunc(int fact, int num)
{
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int fact = 1;
    int num;
    cout << "Enter a number to calculate a factorial :";
    cin >> num;
    int FactMain = FactFunc(fact, num);
    cout << "Fact = " << FactMain;
}