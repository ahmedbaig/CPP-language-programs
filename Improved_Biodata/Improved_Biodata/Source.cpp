#include <iostream>
#include <string>

using namespace std;

//Global declarations
string name[10], address[10];
int age[10], x, y, r = 0, choice, id[10];
double mark[10];
char grade[10];
char section[10];

void inputs(){
	for (x = 1; x <= 10; x++){
		//input loop
		++r;
		id[x] = r;
		cout << "\tStudent ID: " << r << endl;
		cout << "Enter name: ";
		getline(cin, name[x]);
		cout << "Enter age: ";
		cin >> age[x];
		cout << "Enter mark: ";
		cin >> mark[x];
		cout << "Enter grade: ";
		cin >> grade[x];
		cout << "Enter section: ";
		cin >> section[x];
		cout << "Enter address: ";
		getline(cin,address[x]);
		//condition
		cout << "\nYou want to add another student \n\t1)Yes 2)No" << endl;
		cin >> choice;
		if (choice == 2){
			break;
		}
	}
}

void outputs(){
	for (y = 1; y <= r; y++){
		//output loop

		cout << "\tStudent ID: " << id[y] << endl;
		for (x = 0; x <= 32; x++){
			cout << "-";
		}
		cout << endl;
		cout << "|	Student name\t\t|" << name[y] << ".\n";
		cout << "|	Student age\t\t|" << age[y] << ".\n";
		cout << "|	Student marks\t\t|" << mark[y] << ".\n";
		cout << "|	Student grade\t\t|" << grade[y] << ".\n";
		cout << "|	Student section\t\t|" << section[y] << ".\n";
		cout << "|	Student address\t\t|" << address[y] << ".\n";
		for (x = 0; x <= 32; x++){
			cout << "-";
		}
		cout << endl;
	}
}

void main(){
	inputs();
	system("cls");
	outputs();
	cout << endl;
	system("PAUSE");
	getchar();
}