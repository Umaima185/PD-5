//task 2

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

//task 3

#include<iostream>
using namespace std;

float price(float,char);

main()
{
 char code;
 float result = 0,p;

 cout<<"Enter the car price: $";
 cin>>p;
 cout<<"Enter the car code: ";
 cin>>code;

 result = price(p,code);
 cout<<"The price after tax is :"<<result;
 }

 float price(float p , char code)
 {
    float tax;
    if(code == 'M'|| code == 'm')
    {
        tax =p + (p * 6/100);
        return tax;
    }
    if(code == 'E'|| code == 'e')
    {
        tax =p + (p * 8/100);
        return tax;
    }
    if(code == 'S'|| code == 's')
    {
        tax =p + (p * 10/100);
        return tax;
    }
    if(code == 'V'|| code == 'v')
    {
        tax =p + (p * 12/100);
        return tax;
    }
    if(code == 'T'|| code == 't')
    {
        tax =p + (p * 15/100);
        return tax;
    }
 }



//task 4

#include<iostream>
using namespace std;

int time(int,int,int);

main()
{
    int h,d,w,result = 0;
    cout<<"Enter the needed hours: ";
    cin>>h;
    cout<<"Enter the required days: ";
    cin>>d;
    cout<<"Enter the workers: ";
    cin>>w;

    result = time(h,d,w);
   if (result>h)
   {
    cout<<"The time  is not enough!!\n."<<result-h<<" hours needed";
   }
   if (result<h)
   {
    cout<<"The time  is enough!!\n."<<h-result<<" hours more";
   }
   
}

int time(int h,int d, int w)
{
    int r,f;
    r = (w*d*9);
return r;
}

