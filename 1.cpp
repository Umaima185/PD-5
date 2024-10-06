#include <iostream>
using namespace std;

double unit(float, float, float, string);

main()
{

    float h, w, l;
    double result = 0;
    string units;
    cout << "Enter length in meters: ";
    cin >> l;
    cout << "Enter width in meters: ";
    cin >> w;
    cout << "Enter height in meters: ";
    cin >> h;
    cout << "Choose the units(meters, millimeters, centimeters, kilometers): ";
    cin >> units;
    result = unit(l, h, w, units);
    cout << "The volume of pyramids in " << units << " is " << result;
}

double unit(float l, float h, float w, string units)
{
    double r;
    if (units == "kilometers" || units == "Kilometers")
    {
        r = ((l / 1000) * (h / 1000) * (w / 1000))/3;
        return r;
    }
    else if (units == "millimeters" || units == "Millimeters")
    {
        r = (l * 1000 * w * 1000 * h * 1000)/3;
        return r;
    }
    else if (units == "centimeters" || units == "Centimeters")
    {
        r = (l * 100 * w * 100 * h * 100)/3;
        return r;
    }
    else if (units == "meters" || units == "Meters")
    {
        r =( l * w * h)/3;
        return r;
    }
    else
    {
        return 0;
    }
}