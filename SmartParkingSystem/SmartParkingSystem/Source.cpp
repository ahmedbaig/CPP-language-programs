#include <iostream>
#include <string>
#include <conio.h>
//standard template library
#include <cstdlib>
#include <stdexcept>
#include <vector>
//time
#include <time.h> 

using namespace std;
void start();
void line();
void line(){
	cout << " ";
	for (int i = 0; i <= 117; i++){
		cout << "-";
	}
}

template <class p>
class parking{
private:
	vector<p> slot;
public:
	void mandatory(p const&);

	void empty();
	
	void display();

	void push(p const&);

	void pop(p const&);

	void show_all();

	void reserve(int);

	void add_to_reserve(int, p const&);

	void remove_reserve(int);

	void login(p const& elem, p const& elems){
		int n, i = 0;
		string plate;
		system("cls");
		if (elem == "employee" && elems == "pass"){
			while (i != 1){
				line();
				cout << "\n\t\t\t| 1. add car| 2. Display Parking Lot| 3. Remove car| 4. Logout| 5. Exit|" << endl; line(); cout << "\n\tYour choice: ";
				cin >> n;
				switch (n){
				case 1:
					cout << "\n\n\tEnter plate number of car : ";
					cin.ignore();
					getline(cin, plate);
					this->push(plate);
					break;
				case 2:
					this->display();
					break;
				case 3:
					cout << "\n\n\tEnter plate number of car : ";
					cin.ignore();
					getline(cin, plate);
					this->pop(plate);
					break;
				case 4:
					++i;
					break;
				case 5:
					exit(0);
				default:
					cout << "*ERROR 400 -RESOURCE NOT FOUND" << endl;
					break;
				}
			}
		}
		else if (elem == "admin" && elems == "admin123"){
			while (i != 1){
				line();
				cout << "\n\t\t\t\t\t| 1. Add car\t\t\t|\n\t\t\t\t\t| 2. Display Parking Lot\t|\n\t\t\t\t\t| 3. Remove car\t\t\t|\n\t\t\t\t\t| 4. Reserve slot\t\t|\n\t\t\t\t\t| 5. Add to reserved slot\t|\n\t\t\t\t\t| 6. Remove reserved slot\t|\n\t\t\t\t\t| 7. Logout\t\t\t|\n\t\t\t\t\t| 8. show all\t\t\t|\n\t\t\t\t\t| 9. Exit\t\t\t|" << endl; line(); cout << "\n\tYour choice: ";
				cin >> n;
				switch (n){
				case 1:
					cout << "\n\n\tEnter plate number of car : ";
					cin.ignore();
					getline(cin, plate);
					this->push(plate);
					break;
				case 2:
					this->display();
					break;
				case 3:
					cout << "\n\n\tEnter plate number of car : ";
					cin.ignore();
					getline(cin, plate);
					this->pop(plate);
					break;
				case 4:
					this->show_all();
					cout << "\n\n\tEnter Slot number to reserve : ";
					cin >> n;
					reserve(n);
					this->display();
					break;
				case 5:
					this->show_all();
					cout << "\n\n\tEnter Reserved Slot number : ";
					cin >> n;
					cout << "\n\n\tEnter plate number of car : ";
					cin.ignore();
					getline(cin, plate);
					this->add_to_reserve(n, plate);
					this->display();
					break;
				case 6:
					this->show_all();
					cout << "\n\n\tEnter Slot number to remove reserve : ";
					cin >> n;
					this->remove_reserve(n);
					this->display();
					break;
				case 7:
					++i;
					break;
				case 8:
					this->show_all();
					break;
				case 9:
					exit(0);
				default:
					cout << "*ERROR 400 -RESOURCE NOT FOUND" << endl;
					break;
				}
			}
		}
		else{
			cout << "*Incorrect input*" << endl;
		}
	}
};

template <class p>
void parking<p>::mandatory(p const& elem){
	slot.push_back(elem);
}

template <class p>
void parking<p>::empty(){
	for (int x = 1; x <= 97; x++){
		mandatory("EMPTY");
	}
}

template <class p>
void parking<p>::display(){
	system("cls");

	cout << "\t\t\t\t\t\t*PARKING LOT DISPLAY*" << endl;
	cout << "\t\t\t\t";
	for (int x = 1; x <= 49; x++){
		cout << "_" ;
	}
	cout << endl;
	
	int z = 0;
	for (int y = 1; y <= 4; y++){//row creater
		cout << "\t\t\t\t";
		for (int x = 1; x <= 24; x++){//coloum creater
			cout << "|";
			++z;
			//check codes
			if (slot[z] == "RESERVED"){
				cout << "x";
			}
			else if (slot[z] == "EMPTY"){
				cout << " ";
			}
			else{
				cout << "\xdb";
			}
			//check codes complete
		}
		cout << "|" << endl;
		cout << "\t\t\t\t";
		for (int x = 1; x <= 49; x++){
			cout << "_";
		}
		cout << endl;
	}
	cout << endl;
}

template <class p>
void parking<p>::push(p const& elem){
	system("cls"); 
	if (slot.empty()){
		throw out_of_range("REQUEST OUT OF RANGE");
	}
	for (int i = 1; i <= 96; i++){
		//check codes
		if (slot[i] == "RESERVED"){
			continue;
		}
		else if (slot[i] == "EMPTY"){
			slot[i] = elem;
			cout << "*ADDED AT SLOT " << i << "*" << endl;
			break;
		}
		else{
			continue;
		}
	}
}

template <class p>
void parking<p>::pop(p const& elem){
	system("cls");
	for (int i = 1; i <= 96; i++){
		//check codes
		if (elem == slot[i]){
			slot[i] = "EMPTY";
			break;
		}
		//chech codes end
	}
}

template <class p>
void parking<p>::reserve(int elem){
	if (slot.empty()){
		throw out_of_range("REQUEST OUT OF RANGE");
	}
	if (slot[elem] == "EMPTY"){
		slot[elem] = "RESERVED";
		cout << "\t\t\t\t\t\t*SLOT RESERVED*" << endl;
	}
	else{
		cout << "\t\t\t\t\t\t*SLOT NOT AVAILABLE*" << endl;
	}
}

template <class p>
void parking<p>::add_to_reserve(int n, p const& elem){
	if (slot[n] == "RESERVED" || slot[n] == "EMPTY"){
		slot[n] = elem;
		cout << "\t\t\t\t\t\t*ADDED TO RESERVED SLOT*" << endl;
	}
	else{
		cout << "\t\t\t\t\t\t*SLOT NOT AVAILABLE*" << endl;
	}
}

template <class p>
void parking<p>::remove_reserve(int elem){
	if (slot.empty()){
		throw out_of_range("REQUEST OUT OF RANGE");
	}
	if (slot[elem] == "RESERVED"){
		slot[elem] = "EMPTY";
		cout << "\t\t\t\t\t\t*SLOT RESERVED*" << endl;
	}
	else{
		cout << "\t\t\t\t\t\t*SLOT NOT AVAILABLE*" << endl;
	}
}

template <class p>
void parking<p>::show_all(){
	system("cls");
	cout << "\t\t\t\t\t\t*DISPLAYING ALL SLOTS*" << endl;
	int x;
	line();
	cout << endl;
	cout << "|\tSLOT NUMBER\t\t\t\t\t|\t\t SLOT STATUS \t\t\t|" << endl;
	line();
	cout << endl;
	for (decltype(slot.size())x = 1; x <= slot.size() - 1; x++){
		cout << "|\t\t" << x << ".\t\t\t\t\t|\t\t" << slot[x] << "\t\t\t|" << endl;
	}
	line();
	cout << endl;
}

int main(){
	start();
	system("pause");
	return 0;
}

void start(){
	try{
		parking<string> slot;
		slot.empty();
		int n; string name, pass;
		while (1){
			line();
			cout << "\n\t\t\t\t| 1. Login| 2. Display Parking Lot| 3. Exit|" << endl; line(); cout << "\n\tYour choice: ";
			cin >> n;
			switch (n){
			case 1:
				system("cls");
				line();
				cout << "\n\t\t\t\t\t\t| Login panel |" << endl;
				line();
				cout << "\n\n\t\tUsername : ";
				cin.ignore();
				getline(cin, name);
				cout << "\n\n\t\tPassword : ";
				cin >> pass;
				slot.login(name, pass);
				break;
			case 2:
				slot.display();
				break;
			case 3:
				exit(0);
			default:
				cout << "*WRONG INPUT*" << endl;
				break;
			}
		}
	}
	catch (exception const& ex){
		cerr << "Exception: " << ex.what() << endl;
	}
}
