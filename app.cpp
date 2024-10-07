#include<iostream>
#include<windows.h>
#include <iomanip> 
using namespace std;

void xy(int,int);
void app();
void inputs();
int gross(int,int);


int x = 0,y = 0;
int i = 0,id,hours,n;
float payrate,g_salary;

main(){


system("cls");
app();
cout<<"Enter the number of employees:";
cin>>n;
while(i<=n){
cout<<endl;
inputs();
cout<<endl;
i++;
if(i==n){
xy(x+10,y+30);
 cout<<"Employee ID:";
xy(x+30,y+30);
cout<<"Working Hours:";
xy(x+50,y+30);
cout<<"Pay rate:";
xy(x+70,y+30);
cout<<"Gross Salary:";

}
}

}

void app()
{
xy(x+10,y+5);
cout<<"***************************************"<<endl;
xy(x+10,y+6);
cout<<"       P  A  Y  R  O  L  L"<<endl;
xy(x+10,y+7);
cout<<"****************************************"<<endl;
}

void inputs(){
   int r;
    cout<<"Enter the Employee ID: ";
    cin>>id;
    cout<<"Enter the Working hours: ";
    cin>>hours;
    cout<<"Pay rate: ";
    cin>>payrate;
r = gross(hours,payrate);
cout<<"Gross-Salary:"<<r;
}

int gross(int hours,int payrate){
	g_salary = hours*payrate*30;
return g_salary;

}


void xy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}