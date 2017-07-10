#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void start();
void file_maker();
void main(){
	start();

}
void start(){
	file_maker();
}
void file_maker(){

	int x;

	ofstream file("Numbers.txt");

	for (x = 0; x <= 100; x++){
		file << x << endl;
	}
	file.close();

}