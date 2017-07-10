#include <iostream>

using namespace std;

int start();
int main(){
	start();
	system("PAUSE");
	return 0;
}
int start(){
	float result, salary, clearance, rent;
	cout << "Enter your salary : ";
	cin >> salary;
	cout << "Enter your clearance [Without percentage sign]: ";
	cin >> clearance;
	clearance = clearance / 100;
	clearance = salary * clearance;
	cout << "Enter your rent [Without percentage sign]: ";
	cin >> rent;
	rent = rent / 100;
	rent = salary * rent;

	result = salary + clearance + rent;
	cout << "Your gross salary is " << result << endl;
	return 0;
}