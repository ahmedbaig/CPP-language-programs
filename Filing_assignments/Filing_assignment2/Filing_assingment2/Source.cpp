#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string choice;

int start(string);
int file_maker(string);
int file_reader(string);
int file_append(string);
int main(){
	string input = "";
	start(input);
	system("PAUSE");
	return 0;
}
int start(string input){
	cout << "\n\nDo you want to make a new file or read/append on an existing?\nChoice : ";
	cin >> choice;
	if (choice == "read" || choice == "Read" || choice == "READ" || choice == "r" || choice == "append" || choice == "Append" || choice == "APPEND" || choice == "a" || choice == "read/append" || choice == "Read/Append" || choice == "READ/APPEND" || choice == "r/a"){
		file_reader(input);
	}
	else if (choice == "write" || choice == "Write" || choice == "WRITE" || choice == "w"){
		file_maker(input);
	}
	else{
		cout << "\nwrong input.\n";
		return 0;
	}
}
int file_maker(string input){
	string file_name;
	cout << "\nstart write\n=============\n\n";

	cin.ignore();
	getline(cin, input);

	cout << "Enter file name to save as : ";
	getline(cin, file_name);

	ofstream file(file_name);

	file << input;

	file.close();

	cout << "\n\nWant to go back to home : ";
	cin >> choice;
	if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "y"){
		start(input);
	}
	else if (choice == "no" || choice == "No" || choice == "NO" || choice == "n"){
		exit(1);
	}
	else{
		cout << "wrong input.\n";
		return 0;
	}
}
int file_reader(string output){
	string file_name, append, data;
	cout << "\nEnter name of file with extension: ";
	cin.ignore();
	getline(cin, file_name);

	ifstream file;
	file.open(file_name);
	if (!file) {
		cout << "\nError opening input file" << endl;
	}
	else{

		getline(file, output);

		file.close();

		cout << output << endl;

		cout << "Do you want to append something?" << endl;
		cin >> choice;
		if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "y"){
			
			cout << "\nstart write\n=============\n\n";
			
			cin.ignore();
			getline(cin, append);

			ofstream file;
			file.open(file_name);

			output.append(append);
			file << output;

			file.close();

		}
		else if (choice == "no" || choice == "No" || choice == "NO" || choice == "n"){
			exit(1);
		}
		else{
			cout << "\nwrong input.\n";
			return 0;
		}
	}

	cout << "\n\nWant to go back to home : ";
	cin >> choice;
	if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "y"){
		start(output);
	}
	else if (choice == "no" || choice == "No" || choice == "NO" || choice == "n"){
		exit(1);
	}
	else{
		cout << "\nwrong input.\n";
		return 0;
	}

}

