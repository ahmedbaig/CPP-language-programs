#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class s>
class stand{
private:
	int number[100], dep[100], arr[100], seat[30], i = -1;
	vector<s> name, to, from, passenger;
public:
	void install();
	void empty();
	void reserve();
	void show();
	void available();
};

template <class s>
void stand<s>::install(){
	i++;
	cout << "Bus no. : ";
	cin >> number[i];
	cout << "Driver name : ";
	cin >> name[i];
	cout << "Departure time : ";
	cin >> dep[i];
	cout << "Arrival time : ";
	cin >> arr[i];
	cout << "To : ";
	cin >> to[i];
	cout << "From : ";
	cin >> from[i];
	this->empty();
}

template <class s>
void stand<s>::empty(){
	for (int n = 0; n < 30; n++){
		seat[n] = 0;
	}
}

template <class s>
void stand<s>::reserve(){
	int temp; string passenger_temp;
	cout << "Bus number : ";
	cin >> temp;
	cout << "Passenger name : ";
	cin.ignore();
	getline(cin, passenger_temp);
	for (int n = 0; n <= 100; n++){
		if (temp == number[n]){
			passenger.push_back(passenger_temp);
			break;
		}
		else{
			continue;
		}
	}
	cout << "Seat no : ";
	cin >> temp;
	seat[i] = temp;
	
}

template <class s>
void stand<s>::show(){
	int n;
	for ( n = 0; n <= passenger.size() - 1; n++){
		cout << "Passenger name : " << passenger[n] << endl;
		cout << "Bus number : " << number[n] << endl;
		cout << "Seat number : " << seat[n] << endl;
	}
}

template <class s>
void stand<s>::available(){

}

int main(){
	stand<string> stand;
	int n;
	cout << "|1. Install bus |2. Reserve seat |3. Show Ticket |4. Available Bus |5. Exit\n\t\tYour choice : " << endl;
	cin >> n;
	switch (n){
	case 1:
		stand.install();
		break;
	case 2:
		stand.reserve();
		break;
	case 3:
		stand.show();
		break;
	case 4:
		stand.available();
		break;
	case 5:
		exit(0);
		break;
	default:
		cout << "*wrong input*" << endl;
		break;
	}
}