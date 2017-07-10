#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void start();
void nanr();
void yanr(int, int);
int nayr();
int yayr(string, int);

void main(){

	start();
	getch();
}
void start(){
	int ch;
	cout << "Which do you want to see?\n(1)No Arguement No return. \n(2)Yes Arguement No return. \n(3)No Arguement Yes return.\n(4)Yes Arguement Yes return.";
	cin >> ch;
	switch(ch){
	case 1:
		//first
		nanr();
		break;
	case 2:
		//second
		cout << "Value swap" << endl;
		int ch;
		cout << "Do you want to see value swapping?\n\t(1)Yes (2)No";
		cin >> ch;
		if(ch==1){
				int x, y;
				cout << "Enter value of x: ";
				cin >> x;
				cout << "Enter value of y: ";
				cin >> y;
				yanr(x, y);
				break;}
		else{
				start();
		}
		break;
	case 3:
		//third
		cout << "Table of any number" << endl;
		nayr();
		break;
	case 4:
		cout << "CGPA Calculator" << endl;
		string name; int roll;
		cout << "Student name: ";
		cin >> name;
		cout << "Student rollno: ";
		cin >> roll;
		yayr(name, roll);
	}
}
void nanr(){
	string name;
	cout << "Hi there!" << endl;
	cout << "Please enter your name: ";
	cin >> name;
	cout << "________\n|"<<name<<"|\n________"<<endl;
}
void yanr(int x, int y){
	x=x+y;
	y=x-y;
	x=x-y;
	cout << "-------------"<<endl;
	cout << "New value of x: " << x << endl;
	cout << "New value of y: " << y << endl;
}
int nayr(){
	int table, ans, x;
	cout << "Enter any number ";
	cin >> table;
	for(x=1;x<=10;x++){
		ans=table*x;
		cout << table << "x" << x << "=" << ans <<endl;
	}
	return ans;
}
int yayr(string name, int roll){
		double A, Bp, B, Cp, C, tc;
		double a, bp, b, cp, c, result;
	
	cout << "Student: " << name <<endl;
	cout << "Rollno: " << roll << endl;
	//math corner
	cout << "How many courses have you passed: ";
	cin >> tc;
	cout << "How many C's do you have: ";
	cin >> C;
	c=C*2;
	cout << "How many C plus's do you have: ";
	cin >> Cp;
	cp=Cp*2.5;
	cout << "How many B plus''s do you have: ";
	cin >> Bp;
	b=B*3;
	cout << "How many B's do you have: ";
	cin >> B;
	bp=Bp*3.5;
	cout << "How many A's do you have: ";
	cin >> A;
	a=A*4;	
	result=(a+b+bp+c+cp)/tc;
	cout << result;
	return 0;
}