// function overloading
#include<iostream>
#include<cmath>
using namespace std;

// volume of a sphere
double volume(double radius);
// volume of a cylinder, overloaded
double volume(double radius, double height);

// constants
const double PI = 3.141592654;

// lesson 7, exercise 1
// function overloading
#include<iostream>
#include<cmath>
using namespace std;

// volume of a sphere
double volume(double radius);
// volume of a cylinder, overloaded
double volume(double radius, double height);

// recursive function to calculate volume
// of sphere or cylinder
// helps errorproof user input for which function to call
double recursiveCalculator(char userSelection);

int main()
{
    cout << "Enter z for cylinder, c for circle: ";
    char userSelection = 'z';
    cin >> userSelection;
    double v = recursiveCalculator(userSelection);
    cout << "The volume is: " << v << endl;

    return 0;
}

// returns the volume of a sphere
double volume(double radius)
{
    return 4.0*PI*pow(radius, 3)/3.0;
}

// returns the volume of a cylinder
// overloaded function
double volume(double radius, double height)
{
    return PI*pow(radius, 2)*height;
}

// recursive function that utilizes the volume()
// function to calculate volume
// helps errorproof user input for which function
// to call
double recursiveCalculator(char userSelection) {
    double volumeOfShape = -1;
    
    if (userSelection == 'z')
    {
        // invoke overloaded function
        double r, h;
        cout << "Radius of Cylinder: ";
        cin >> r;
        cout << "Height of Cylinder: ";
        cin >> h;
        volumeOfShape = volume(r, h);
    }
    else if (userSelection == 'c')
    {
        // invoke original function
        double r;
        cout << "Radius of Sphere: ";
        cin >> r;
        volumeOfShape = volume(r);
    }
    else
    {
        // recursion
        cout << "Incorrect Choice." << endl;
        cout << "Enter z for cylinder, c for circle: ";
        cin >> userSelection;
        volumeOfShape = recursiveCalculator(userSelection);
    }
    
    return volumeOfShape;
}