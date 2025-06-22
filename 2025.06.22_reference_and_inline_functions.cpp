#include<iostream>
#include<cmath>
using namespace std;

const double PI = 3.14159265359;

// inline: memory allocated for function when called
// useful since only tabulating area of circle
// reference function: input radius referenced from main()
inline void AreaReference(double radius, double& result)
{
    result = PI*pow(radius, 2.0);
}

// inline: memory allocated for function when called
// useful since only tabulating area of circle
// argument copied from main() 
inline double AreaCopy(double radius)
{
    return PI*pow(radius, 2.0);
}

int main() 
{
    cout << "Enter Radius: ";
    double radius = 0.0;
    cin >> radius;

    double areaFetched = 0.0;
    AreaReference(radius, areaFetched);
    double areaCalculated = AreaCopy(radius);

    cout << "The sizeof areaFetched is: " << sizeof(areaFetched) << endl;
    cout << "The sizeof areaCalculated is: " << sizeof(areaCalculated) << endl;
    cout << "The sizeof radius is: " << sizeof(radius) << endl;
    
    cout << "The Area Fetched is: " << areaFetched << endl;
    cout << "The Area Calculated is: " << areaCalculated << endl;
    
    cout << "The location of areaFetched is: " << &areaFetched << endl;
    cout << "The location of areaCalculated is: " << &areaCalculated << endl;
    cout << "The location of radius is: " << &radius << endl;
    
    cout << "Enter a new radius: ";
    cin >> radius;
    
    cout << "The Area Fetched is: " << areaFetched << endl; // same value as before
    cout << "The Area Calculated is: " << areaCalculated << endl; // same value as before
    
    cout << "The location of areaFetched is: " << &areaFetched << endl;  // same location as before
    cout << "The location of areaCalculated is: " << &areaCalculated << endl; // same location as before
    cout << "The location of radius is: " << &radius << endl; // same location as before
    
    return 0;
}