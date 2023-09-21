// Convert Kilometer to Miles
#include <iostream>
using namespace std;
double KmToMiles(double KM)
{
    double DistanceInMiles = (KM * 0.621371);
    return DistanceInMiles;
}
int main()
{
    double KM;
    cout << "Enter distance in kilometer to convert into miles : ";
    cin >> KM;
    double MKmToMiles = KmToMiles(KM);
    cout << "Distane in miles is = " << MKmToMiles;
}