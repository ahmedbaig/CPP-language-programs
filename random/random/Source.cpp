#include <iostream>
#include <cstdlib>

using namespace std;

//void main(){
//	int num;
//	cout << "enter random numbers : ";
//	cin >> num;
//
//	for (int i = 1; i <= num; i++){
//		cout << "\n" << rand() % 5;
//	}
//	system("pause");
//
//}
void start();
int random(int,int);
void main(){
	start();
	system("pause");
}
void start(){
	int num, dig;
	cout << "How many random numbers do you want : ";
	cin >> num;
	cout << "How many digits max digits : ";
	cin >> dig;
	switch (dig){
	case 1:
		random(num, 10);
		break;
	case 2:
		random(num, 100);
		break;
	case 3:
		random(num, 1000);
		break;
	case 4:
		random(num, 10000);
		break;
	case 5:
		random(num, 100000);
		break;
	case 6:
		random(num, 1000000);
		break;
	default:
		cout << "*Max limit is 6 digits*" << endl;
		break;
	}

}
int random(int x,int y){
	if (x == 0){
		return 0;
	}
	else{
		cout << x << "-\t" << rand() % y << "\n";
		x--;
		random(x, y);
	}
}





