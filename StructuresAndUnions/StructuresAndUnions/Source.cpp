
#include <iostream>
#include <string>

using namespace std;

void FEED_INFO();
void CALC_FUEL(struct airport a);
void SHOW_INFO(struct airport a);
struct airport{
	int flight_num;
	char destination[100];
	float distance;
	float fuel;
};
void main(){
	FEED_INFO();
	system("PAUSE");
}
void FEED_INFO(){
	struct airport a;
	cout << "Enter Flight number : ";
	cin >> a.flight_num;
	cout << "Enter destination : ";
	cin >> a.destination;
	cout << "Enter distance : ";
	cin >> a.distance;
	CALC_FUEL(a);
}
void CALC_FUEL(struct airport a){
	if (a.distance <= 1000){
		a.fuel = 500;
	}
	else if (a.distance > 1000 && a.distance <= 2000){
		a.fuel = 1100;
	}
	else if (a.distance > 2000) {
		a.fuel = 2200;
	}
	else{
		cout << "Distance could not be computers" << endl;
	}
	SHOW_INFO(a);
}
void SHOW_INFO(struct airport a){
	cout << "++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "Your Flight number is :" << a.flight_num << endl;
	cout << "Your destination is : " << a.destination << endl;
	cout << "Your distance : " << a.distance << endl;
	cout << "Your calulated fuel will be : " << a.fuel << endl;
}
