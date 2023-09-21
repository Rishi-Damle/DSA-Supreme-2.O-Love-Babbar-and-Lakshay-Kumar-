// set the Kth Bit
#include <iostream>
using namespace std;
int SetKthBit(int N, int K)
{
    int Mask = 1 << K;
    int ans = N | Mask;
    return ans;
}

int main()
{
    int N;
    cout << "Enter value of N :";
    cin >> N;
    int K;
    cout << "Enter value of K : ";
    cin >> K;
    int MSetKthBit = SetKthBit(N, K);
    cout << "Afet setting the kth bit as set bit the value is : " << MSetKthBit;
    return 0;
}