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
