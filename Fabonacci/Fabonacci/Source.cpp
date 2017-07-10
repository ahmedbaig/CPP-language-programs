#include <iostream>

using namespace std;

void start();
void design();
double fab(double);
void start(){
	double x, counter = 1;
	cout << "Enter the range of the fibonacci series : ";
	cin >> x;
	cout << "\nSeries till length " << x << " : " << endl;
	design();
	cout << "\n\t|    Numbers\t|    Series numbers\t|" << endl;
	design();
	cout << endl;
	for (counter; counter <= x; counter++){
		cout << "\t|\t" << counter << "\t|\t" << fab(counter) << "\t\t|" << endl;
	}
	design();
	cout << endl;
}
void design(){
	cout << "\t";
	for (int x = 0; x <= 40; x++){
		cout << "_";
	}
}
double fab(double x){
	if ( x <= 0 ){
		return 0;
	}
	if ( x <= 1 ){
		return 1;
	}
	else{
		return fab(x - 1) + fab(x - 2);
	}
}
int main(){
	start();
	system("PAUSE");
}