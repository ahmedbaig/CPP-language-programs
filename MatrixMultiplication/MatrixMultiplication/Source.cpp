#include <iostream>

using namespace std;

int main(){
	int r1, c1, a[10][10], r2, c2, b[10][10], sum[10][10], x, y, z;
	cout << "+++++++ Matrix A +++++++ " << endl;
	cout << "Enter number of Row : ";
	cin >> r1;
	cout << "Enter number of Coloumns : ";
	cin >> c1;
	cout << "+++++++ Matrix B +++++++ " << endl;
	cout << "Enter number of Row : ";
	cin >> r2;
	cout << "Enter number of Coloumns : ";
	cin >> c2;
	if (r1 != c2){
		cout << "Error" << endl;
		return 0;
	}
	else{
		cout << "+++++++ Matrix A +++++++ " << endl;
		for (x = 0; x < r1; x++){
			for (y = 0; y < c1; y++){
				cout << "Row : " << x << " Coloumn : " << y << endl;
				cin >> a[x][y];
			}
			cout << endl;
		}

		cout << "+++++++ Matrix B +++++++ " << endl;
		for (x = 0; x < r2; x++){
			for (y = 0; y < c2; y++){
				cout << "Row : " << x << " Coloumn : " << y << endl;
				cin >> b[x][y];
			}
			cout << endl;
		}

		//initializing
		for (x = 0; x < r1; x++){
			for (y = 0; y < c1; y++){
				sum[x][y] = 0;
			}
		}

		//math corner
		for (x = 0; x < r1; x++){
			for (y = 0; y < c2; y++){
				for (z = 0; z < c1; z++){
					sum[x][y] = sum[x][y] + (a[x][z] * b[z][y]);
				}
			}
		}


		cout << "\n\t\t\t--Multiplication--\n" << endl;
		for (x = 0; x < r1; x++){
			cout << "\t\t[\t";
			for (y = 0; y < c1; y++){
				cout << sum[x][y] << "\t";
			}
			cout << "]";
			cout << endl;
		}
	}

	system("PAUSE");
}
