// Display area of circle
#include <iostream>
using namespace std;
float AreaC(float Radius)
{
    const float pi = 3.14159;
    float AofC = pi * Radius * Radius;
    return AofC;
}
int main()
{
    float Radius;
    cout << "Enter radius of circle :";
    cin >> Radius;
    float CalArea = AreaC(Radius);
    cout << "Area of circle having Radius " << Radius << " = " << CalArea;
    return 0;
}