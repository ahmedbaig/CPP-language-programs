#include <iostream>
#include <string>

using namespace std;

//Global declarations
string name[10], address[10], subject[10], email[10], school[10], college[10], university[10], teacher[10], city[10], province[10];
int age[10], x, y, r=0, choice, id[10];
double mark[10];
char grade[10];
char section[10];

void inputs(){
	for(x=1 ; x<=10 ; x++){
		//input loop
		++r;
		id[x] = r;
		cout << "\tStudent ID: " << r <<endl;
		cout << "Enter name: ";
		cin >> name[x];
		cout << "Enter age: ";
		cin >> age[x];
		cout << "Enter mark: ";
		cin >> mark[x];
		cout << "Enter grade: ";
		cin >> grade[x];
		cout << "Enter section: ";
		cin >> section[x];
		cout << "Enter address: ";
		cin >> address[x];
		cout << "Enter subject: ";
		cin >> subject[x];
		cout << "Enter email: ";
		cin >> email[x];
		cout << "Enter school: ";
		cin >> school[x];
		cout << "Enter college: ";
		cin >> college[x];
		cout << "Enter university: ";
		cin >> university[x];
		cout << "Enter teacher: ";
		cin >> teacher[x];
		cout << "Enter city: ";
		cin >> city[x];
		cout << "Enter province: ";
		cin >> province[x];
		//condition
		cout << "\nYou want to add another student \n\t1)Yes 2)No" <<endl;
		cin >> choice;
		if(choice == 2){
			break;
		}
	}
}

void outputs(){
	for(y=1 ; y<=r ; y++){
		//output loop
		
		cout << "\tStudent ID: " << id[y] <<endl;
		for(x=0; x<=32; x++){
			cout << "-" ;	
		}
		cout << endl;		
		cout << "|	Student name\t\t|" << name[y] << ".\n";
		cout << "|	Student age\t\t|" << age[y] << ".\n";
		cout << "|	Student marks\t\t|" << mark[y] << ".\n";
		cout << "|	Student grade\t\t|" << grade[y] << ".\n";
		cout << "|	Student section\t\t|" << section[y] << ".\n";
		cout << "|	Student address\t\t|" << address[y] << ".\n";
		cout << "|	Student subject\t\t|" << subject[y] << ".\n";
		cout << "|	Student email\t\t|" << email[y] << ".\n";
		cout << "|	Student school\t\t|" << school[y] << ".\n";
		cout << "|	Student college\t\t|" << college[y] << ".\n";
		cout << "|	Student university\t|" << university[y] << ".\n";
		cout << "|	Student teacher\t\t|" << teacher[y] << ".\n";
		cout << "|	Student city\t\t|" << city[y] << ".\n";
		cout << "|	Student province\t|" << province[y] << ".\n";
		for(x=0; x<=32; x++){
			cout << "-" ;	
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