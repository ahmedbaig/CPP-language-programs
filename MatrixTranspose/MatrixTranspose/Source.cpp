#include <iostream>

using namespace std;

void trans();

void main(){
	trans();
	system("PAUSE");
}

void trans(){
	int r, c, i, k, a[10][10], b[10][10];
	cout << "Enter Matrix Size[Row] : ";
	cin >> r;
	cout << "Enter Matrix Size[Coloumns] : ";
	cin >> c;
	cout << "Inputs:" << endl;
	for (i = 0; i < r; i++){
		for (k = 0; k < c; k++){
			cout << "Row : " << i << endl << "Coloumn : " << k << endl;
			cin >> a[i][k];
		}
	}
	cout << "Outputs:" << endl;
	for (i = 0; i < r; i++){
		cout << "\t\t[\t";
		for (k = 0; k < c; k++){
			if (a[i][k] > 3){
				b[i][k] = a[i][k];
			}
			cout << a[i][k] << "\t";
		}
		cout << "]";
		cout << endl;
	}
	cout << "values greater then 3" << endl;
	for (i = 0; i < r; i++){
		for (k = 0; k < c; k++){
			cout << b[i][k] << "\t";
		}
	}
	cout << endl;
	cout << "Transpose:" << endl;
	for (i = 0; i < c; i++){
		cout << "\t\t[\t";
		for (k = 0; k < r; k++){
			cout << a[k][i] << "\t";
		}
		cout << "]";
		cout << endl;
	}
}