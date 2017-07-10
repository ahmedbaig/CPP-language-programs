#include <iostream>

using namespace std;

void start();

void main(){
	start();
	system("PAUSE");
}

void start(){
	int m, n, i, k, a[10][10];
	cout << "Enter Matrix Size[Row] : ";
	cin >> m;
	cout << "Enter Matrix Size[Coloumns] : ";
	cin >> n;
	cout << "--Inputs--" << endl;
	for (i = 0; i < m; i++){
		for (k = 0; k < n; k++){
			cout << "Row : " << i << endl << "Coloumn : " << k << endl;
			cin >> a[i][k];
		}
	}
	cout << "--Outputs--" << endl;
	for (i = 0; i < m; i++){
		cout << "\t\t[\t";
		for (k = 0; k < n; k++){
			cout << a[i][k] << "\t";
		}
		cout << "]";
		cout << endl;
	}
}