#include <iostream>

using namespace std;

int array[100], top = -1;

void push(const int &elem);
void pop();
void top();
void display(); 

int main (){
	while (true){
		cout << "1- push 2- pop 3- top 4- display" << endl;
		switch(n){
			case 1:
				cout << "Enter data to push: ";
				cin n;
				push(n);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4: 
				break;
			default:
				cout << "wrong input";
				break;
		}
	}
	return 0;
}

void push(const int &elem){
	push_back(elem);
}

void pop(){

}

void top(){

}

void display(){

} 
