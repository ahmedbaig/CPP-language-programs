#include <iostream>

using namespace std;

int start();

void main(){
	start();
	system("PAUSE");
}

int start(){
	int m, n, i, k, a[10][10], ans;
	cout << "Enter Matrix Size[Row] : ";
	cin >> m;
	cout << "Enter Matrix Size[Coloumns] : ";
	cin >> n;

	if ( m !=n ){
		cout << "*Error 38-Logic error\nNumber or Rows and Coloums are not equal" << endl;
		return 0;
	}
	else if (m < 2){
		cout << "*Error 38-Logic error\nNumber or Rows and Coloums are less then 2" << endl;
		return 0;
	}
	else if (m>3){
		cout << "*Error 38-Logic error\nNumber or Rows and Coloums are greater then 3" << endl;
		return 0;
	}

	cout << "\t\t--Inputs--\n" << endl;
	for (i = 0; i < m; i++){
		for (k = 0; k < n; k++){
			cout << "Row : " << i << endl << "Coloumn : " << k << endl;
			cin >> a[i][k];
		}
	}

	cout << "\t\t--Outputs--\n" << endl;
	for (i = 0; i < m; i++){
		cout << "\t\t|\t";
		for (k = 0; k < n; k++){
			cout << a[i][k] << "\t";
		}
		cout << "|";
		cout << endl;
	}

	if (m == 2){
			ans = 0;
			ans = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
			
			cout << "Your answer : " << ans << endl;
			cout << endl;		
	}
	if (m == 3){

		ans = 0;
		ans =	a[0][0] * ((a[1][1] * a[2][2]) - (a[1][2] * a[2][1])) - 
				a[0][1] * ((a[1][0] * a[2][2]) - (a[1][2] * a[2][0])) + 
				a[0][2] * ((a[1][0] * a[2][1]) - (a[1][1] * a[2][0]));

		cout << "Your answer : " << ans << endl;
		cout << endl;
	}
}