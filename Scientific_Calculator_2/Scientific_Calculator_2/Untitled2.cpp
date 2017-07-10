#include <iostream>
#include <conio.h>
using namespace std;

int start();
int choi(int);
double add(double, double);
double sub(double, double);
double multi(double, double);
double divi(double, double);
double sin(double, double);
double cos(double, double);
double tan(double, double);
double fact(double);
double pow(double, double);
double sqr(double, double);


double x, y;
int choice;

int start(){
	system("title Calculator");
	cout << "Enter first value: ";
	cin >> x;
	cout << "Enter second value: ";
	cin >> y;
	system("cls");

	
	cout << "\t\t";
	for(int f=0 ; f <=40 ; f++){
		cout << "_";
	}
	cout << "\n\n\t\t|1- addition\t\t6- sin\t\t|\n\t\t|2- subtraction\t\t7- cos\t\t|\n\t\t|3- multiplication\t8- tan\t\t|\n\t\t|4- division\t\t9- factorial\t|\n\t\t|5- squareroot\t\t10-power\t|"<<endl;
	cout << "\t\t";
	for(int f=0 ; f <=40 ; f++){
		cout << "_";
	}

	cout << "\n\nChoice: ";
	cin >> choice;
	choi(choice);
	return 0;
}
int choi(int choice){

	switch(choice){
	case 1:
		cout << "----------\nAnswer: ";
		cout << add(x,y);
		break;
	case 2:
		cout << "----------\nAnswer: ";
		cout << sub(x,y);
		break;
	case 3:
		cout << "----------\nAnswer: ";
		cout << multi(x,y);
		break;
	case 4:
		cout << "----------\nAnswer: ";
		cout << divi(x,y);
		break;
	case 5:
		cout << "----------\nAnswer: ";
		cout << sqr(x,y);
		break;
		
	case 6:
		cout << "Perpendicular will be: " << x << endl;
		cout << "Hypoteneous will be:   " << y << endl;
		cout << "----------\nAnswer: ";
		cout << sin(x,y);
		break;
		
	case 7:
		cout << "Base will be: " << x << endl;
		cout << "Hypoteneous will be:   " << y << endl;
		cout << "----------\nAnswer: ";
		cout << cos(x,y);
		break;
		
	case 8:
		cout << "Perpendicular will be: " << x << endl;
		cout << "Base will be:   		" << y << endl;
		cout << "----------\nAnswer: ";
		cout << tan(x,y);
		break;
		
	case 9:
		cout << "----------\nAnswer: ";
		cout << fact(x);
		break;
		
	case 10:
		cout << "----------\nAnswer: ";
		cout << pow(x,y);
		break;
	default: 
		system("cls");
		cout << "Wrong Input" << endl;
		start();
	}
	return 0;
}
double add(double x, double y){
	return (x+y);
}
double sub(double x, double y){
	return (x-y);
}
double multi(double x, double y){
	return (x*y);
}
double divi(double x, double y){
	return (x/y);
}
double sin(double x, double y){
	return (x/y);
}
double cos(double x, double y){
	return (x/y);
}
double tan(double x, double y){
	return (x/y);
}
double fact(double x){
	if(x <= 1){
		return 1;
	}
	long facto=1, c;
	for(c=1 ; c<=x ; c++){
		facto=facto*c;
	}
	return facto;
}
double pow(double x, double y){
	int temp = 1;
	while(y != 0){
		temp *= x;
		--y;
	}
	return temp;
}
double sqr(double x, double y){
	if(y < 3){
		x = x/2;
		return x;
	}
	return (x/y);
}


int main(){
	start();
	getch();
}