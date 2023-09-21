// Create number using digits
#include <iostream>
using namespace std;
int CreateDigit(int NoOfDigit)
{
    int Digit = 0;
    int FinalNumber = 0;
    for (int i = 1; i <= NoOfDigit; i++)
    {
        cout << "Enter Digit : ";
        cin >> Digit;
        FinalNumber = FinalNumber * 10 + Digit;
        cout << "Created number so far : " << FinalNumber << endl;
    }
    return FinalNumber;
}
int main()
{
    int NoOfDigit;
    cout << "Enter number of Digit you want to enter : ";
    cin >> NoOfDigit;
    int MFinalNumber = CreateDigit(NoOfDigit);
    cout << "The created Number is = " << MFinalNumber;
    return 0;
}