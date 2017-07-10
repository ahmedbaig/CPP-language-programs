#include <iostream>

using namespace std;


int fact(int);
int fact(int x){
	if (x == 0){
		return 0;
	}
	if (x == 1){
		cout << "1" << endl;
		return 1;
	}
	else{
		cout << x << "x";
		return x*fact(x - 1);
	}
}
int main(){
	int x;
	cout << "Enter any number to calculate factorial : ";
	cin >> x;
	cout << "\nCalculation corner : "<< endl;
	cout << "\nYour answer : " << fact(x) << endl;
	system("PAUSE");
}