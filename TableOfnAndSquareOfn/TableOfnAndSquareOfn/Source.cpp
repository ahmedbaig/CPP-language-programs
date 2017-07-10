#include <iostream>
#include <math.h>

using namespace std;

int table(int, int);
int power(int, int);
int main(){
	int choice;

	cout << "Do you want to calculate the table of a number of the square of that number to a given power?\n[1: table\t 2: square]\n\nchoice : ";
	cin >> choice;
	switch (choice){
	case 1:
		int t, l;
		cout << "Enter a number to calculate its table : ";
		cin >> t;
		cout << "Enter limit of that table : ";
		cin >> l;
		table(t, l);
		break;
	case 2:
		int n, p;
		cout << "Enter a number to find power of : ";
		cin >> n;
		cout << "Enter the power of that number : ";
		cin >> p;
		power(n, p);
		break;
	default:
		cout << "wrong input -" << choice << endl;
		break;
	}
	system("PAUSE");
	return 0;
}
int table(int table, int limit){
	int a = 0;
	for (int x = 0; x <= limit; x++){
		a = table * x;
		cout << table << " x " << x << " = " << a << endl;
	}
	return 0;
}
int power(int n, int limit){
	n = pow(n, limit);
	cout << "The power of that number is : " << n << endl;
	return 0;
}