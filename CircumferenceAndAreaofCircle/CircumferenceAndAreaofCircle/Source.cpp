#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int r;
	int c;
	cout << "Do you want to find circumferrene or area \n[1: Area\t2: Circumference]" << endl;
	cin >> c;
	if (c == 1){
		cout << "Enter radius of circule : ";
		cin >> r;
		r = 3.12 * pow(r, 2);
		cout << "Area of circle is " << r;
	}
	else if (c == 2) {
		cout << "Enter radius of circule : ";
		cin >> r;
		r = 2 * 3.12 * r;
		cout << "Circumference of circle is " << r;
	}
	system("PAUSE");
	return 0;
}