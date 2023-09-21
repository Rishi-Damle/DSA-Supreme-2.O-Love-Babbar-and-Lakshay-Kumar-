// Print all digits of an integer
#include <iostream>
using namespace std;
int digit(int NumOfDigits)

{
    int num = 0;
    int digit = 0;
    for (int i = 0; i < NumOfDigits; i++)
    {
        cout << "Enter number : ";
        cin >> digit;
        num = (num * 10) + digit;
    }
    return num;
}
int main()
{
    int NumOfDigits = 0;
    cout << "Enter the number of digits you want to enter :";
    cin >> NumOfDigits;
    int MainDigit = digit(NumOfDigits);
    cout << "Nmber is created = " << MainDigit;
    return 0;
}