#include <iostream>

using namespace std;

int start();
int main(){
	start();
	system("PAUSE");
	return 0;
}
int start(){
	int choice, number, c = 1;
	cout << "|1-Prime Number calculator\t|\n|2- Odd/even numbers\t\t|\n|3- Exit\t\t\t|\n";
	cin >> choice;
	switch (choice){
	case 1:
		system("cls");
		cout << "==Prime Numbers==" << endl;
		cout << "Enter a number : ";
		cin >> number;
		for (int n = 1; n < number; n++){
			if (number % n == 0){
				c++;
				break;
			}
		}
		if (c == 1){
			cout << "The number is a prime number" << endl;

		}
		else{
			cout << "The number is not a prime number" << endl;
		}
		break;
	case 2:
		system("cls");
		int odev;
		cout << "==Odd/Even Numbers==" << endl;
		cout << "Enter a number : ";
		cin >> odev;
		if (odev % 2 == 0){
			cout << "The number is even\n";
		}
		else if (odev % 2 != 0){
			cout << "The number is odd\n";

		}
		break;
	case 3:
		system("cls");
		cout << "==Exit==" << endl;
		exit(0);
		break;
	default:
		cout << "Your input was incorrect" << endl;
		break;
	}
	return 0;
}