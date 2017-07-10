#include <iostream>
#include <string>

using namespace std;

void main(){
	string name[10], address[10];/*subject, email, school, college, university, teacher, city, province;*/
	int age[10], x, y, choice;
	double mark[10];
	char grade[10];
	char section[10];

	for(x=0 ; x<=10 ; x++){
		//input loop
		cout << "Enter name: ";
		cin >> name[10];
		cout << "Enter age: ";
		cin >> age[10];
		cout << "Enter mark: ";
		cin >> mark[10];
		cout << "Enter grade: ";
		cin >> grade[10];
		cout << "Enter section: ";
		cin >> section[10];
		cout << "Enter address: ";
		cin >> address[10];/*
		cout << "Enter subject: ";
		cin >> subject;
		cout << "Enter email: ";
		cin >> email;
		cout << "Enter school: ";
		cin >> school;
		cout << "Enter college: ";
		cin >> college;
		cout << "Enter university: ";
		cin >> university;
		cout << "Enter teacher: ";
		cin >> teacher;
		cout << "Enter city: ";
		cin >> city;
		cout << "Enter province: ";
		cin >> province;*/

		//condition
		cout << "You want to add another student \n\t1)Yes 2)No" <<endl;
		cin >> choice;
		if(choice == 2 || choice == 2 || choice == 2 || choice == 2){
			break;
		}
	}
		system("cls");
	
	for(y=0 ; y<=10 ; y++){
		//output loop
		for(x=0; x<=47; x++){
			cout << "_" ;	
		}
		cout << endl;
		cout << "|	Your name is		" << name[y] << ".	\t|\n";
		cout << "|	Your age is		" << age[y] << ".	\t|\n";
		cout << "|	Your marks is		" << mark[y] << ".	\t|\n";
		cout << "|	Your grade is		" << grade[y] << ".	\t|\n";
		cout << "|	Your section is		" << section[y] << ".	\t|\n";
		cout << "|	Your address is		" << address[y] << ".	\t|\n";/*
		cout << "Your subject is " << subject << ".\n";
		cout << "Your email is " << email << ".\n";
		cout << "Your school is " << school << ".\n";
		cout << "Your college is " << college << ".\n";
		cout << "Your university is " << university << ".\n";
		cout << "Your teacher is " << teacher << ".\n";
		cout << "Your city is " << city << ".\n";
		cout << "Your province is " << province << ".\n";*/
		for(x=0; x<=47; x++){
			cout << "_" ;	
		}
		cout << endl;
	}
	
	cout << endl;
	system("PAUSE");
	getchar();
}