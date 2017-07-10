#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void start();
void file_reader();
int main(){
	start();
	system("PAUSE");
	return 0;

}
void start(){
	file_reader();
}
void file_reader(){
	
	string output;
	int x = 0;

	ifstream file;
	file.open("f_a5.txt");
	if (!file) {
		cout << "Error opening input file - dict  " << endl;
		exit(1);
	}
	while (!file.eof()){
		++x;
		getline(file, output);
		if (output.rfind("A") == 0){
			continue;
		}
		cout << x << "- "<< output << endl;

	}

	file.close();



}