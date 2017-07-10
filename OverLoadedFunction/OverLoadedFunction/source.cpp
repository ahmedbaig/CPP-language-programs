#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void area(int a)
{	int pi=3.14;
      cout<<"\nArea of Circle:"<<pi*a*a;
}
void area(int a,int b)
{
      cout<<"\nArea of rectangle:"<<a*b;
}
void area(float t,int a,int b)
{
      cout<<"\nArea of triangle:"<<t*a*b;
}

void main()
{
	int ch;
     int a,b,r;

     cout<<"\n\t\tFunction Overloading";
     cout<<"\n1.Area of Circle\n2.Area of Rectangle\n3.Area of Triangle\n:";
     cout<<"Enter your Choice:";
     cin >> ch;
 
     switch(ch)
     {
              case 1:
                cout<<"Enter Radius of the Circle:";
                cin >> r;
                area(r);
                break;
              case 2:
                cout<<"Enter Sides of the Rectangle:";
                cin >> a; cin >>b;
                area(a,b);
                break;
              case 3:
                cout<<"Enter Sides of the Triangle:";
                cin >> a; cin >> b;
                area(0.5,a,b);
                break;
              
     }
getch();

}
