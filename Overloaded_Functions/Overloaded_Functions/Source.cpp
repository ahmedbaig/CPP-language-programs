#include <iostream>
#include <string>

using namespace std;

string name, names[5];
int id=0, pass, passes[5], x=0, y=0;

int entrylogin();
int login(string name);
int login(int pass);
int regi();
void access(int);
void admin();

int main(){
	int choice;
	if (x != 0){
		cout << "\n-----------------\n(1)Login\t(2)Register" << endl;
		cout << "\tChoice : ";
		cin >> choice;
		switch (choice){
		case 1:
			entrylogin();
			break;
		case 2:
			regi();
			break;
		default:
			cout << "Incorrent input" << endl;
		}
	}
	else{
		cout << "Registration : " << endl;
		regi();
	}
	system("pause");
}
int regi(){
	x++;
	y = x;
		cout << "\nUser ID " << x << endl;
		cout << "Username : ";
		cin >> names[x];
		cout << "Password : ";
		cin >> passes[x];
		cout << "\n-----------------\nRegistration successful\n-----------------" << endl;
		entrylogin();
	
	return 0;

}
int entrylogin(){
	cout << "Enter Username : ";
	cin >> name;
	if (name == "admin"){
		admin();
	}
	int ret = login(name);
	cout << "Enter Password : ";
	cin >> pass;
	int ret1 = login(pass);
	if (ret1 != 1){
		cout << "Incorrect password" << endl;
		main();
	}
	else{
		access(id);
	}
	return 0;
}
int login(string name){
	for (int x = 1; x <= 6; x++){
		if (name == names[x]){
			id = x;
			return 1;
			break;
		}
	}
}
int login(int pass){
		if (pass == passes[id]){
			return 1;
		}
}
void access(int id){
	int choice;
	cout << "\n-----------------\nWelcome user " << id << endl;
	cout << "(1)Logout";
	cin >> choice;
	if (choice == 1){
		main();
	}

}
void admin(){
	if (id == 0){
		cout << "\nNo active users" << endl;
	}
	else{
		for (int x = 1; x <= y; x++){
			cout << "Usernames : " << names[x] << "\t|\tpasswords : " << passes[x] << endl;
		}
	}
	main();
}
