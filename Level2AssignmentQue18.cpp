// 7. Reverse Integer

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
#include <iostream>
using namespace std;
int reverse(int x, int MAX, int MIN)
{
    int ans = 0, rem = 0;
    bool isnegative = false;
    if (x <= MIN)
    {
        return 0;
    }
    if (x < 0)
    {
        isnegative = true;
        x = -x;
    }
    while (x > 0)
    {
        if (ans > MAX / 10)
        {
            return 0;
        }
        rem = (x % 10);
        ans = (ans * 10) + rem;
        x = x / 10;
    }

    return isnegative ? -ans : ans;
}
int main()
{
    int x;
    int MAX = MAX;
    int MIN = MIN;
    cout << "Enter a value of x :";
    cin >> x;
    int Mreverse = reverse(x, MAX, MIN);
    cout << "Reverse = " << Mreverse;
    return 0;
}