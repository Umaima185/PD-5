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