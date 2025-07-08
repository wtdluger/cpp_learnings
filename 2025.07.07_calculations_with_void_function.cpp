// lesson 7, exercise 5
// calculation within a void function
#include<iostream>
#include<cmath>
using namespace std;

void circleCalculations(double radius, double &area, double &volume);
const double PI = 3.141592654;

int main()
{
    double Radius = 0;
    double Area = 0;
    double Volume = 0;
    cout << "What is the radius of the circle? ";
    cin >> Radius;
    circleCalculations(Radius, Area, Volume);
    cout << "The area is: " << Area << endl;
    cout << "The volume is: " << Volume << endl;
    return 0;
}

void circleCalculations(double radius, double &area, double &volume)
{
    area = PI*pow(radius, 2.0);
    volume = 4*PI*pow(radius, 3.0)/3;
    
}