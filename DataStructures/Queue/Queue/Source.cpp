#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <time.h>

using namespace std;

void line();
template<class s>
class downloader{
private:
	queue<s> elems;
	int i;
public:
	void push(s const&);
	void pop();
	void display();
	s top() const;
	s bottom() const;
	bool empty() const{
		return elems.empty();
	}
};


template <class c>
void downloader<c>::push(c const& elem){
	elems.push(elem);
	cout << "*DOWNLOAD SUCCESFULLY ADDED*" << endl;
}
template <class c>
void downloader<c>::pop(){
	if (elems.empty()){
		throw out_of_range("Queue<>::pop() empty stack");
	}
	elems.pop();
	cout << "*DOWNLOAD REMOVED*" << endl;
}
template <class c>
void downloader<c>::display(){
	if (elems.empty()){
		throw out_of_range("Queue<>::pop() empty stack");
	}
	cout << endl;
	while (!elems.empty()){
		cout << i << ". " << elems.front() <<  endl;
		elems.pop();
		i++;
	}
}
template <class c>
c downloader<c>::top() const{
	if (elems.empty()){
		throw out_of_range("Queue<>::pop() empty stack");
	}
	return elems.front();
}
template <class c>
c downloader<c>::bottom() const{
	if (elems.empty()){
		throw out_of_range("Queue<>::pop() empty stack");
	}
	return elems.back();
}

void line(){
	cout << " ";
	for (int i = 0; i <= 110; i++){
		cout << "-";
	}
}
int main(){
	try{
		downloader<string> stringStack;
		int ch; string name;
		while (1){
			line();
			cout << "\n|1. Add Download| 2. Show Top Download| 3. Show Bottom Download| 4. Finish Top Download| 5. Finish All| 6. Exit|" << endl; line(); cout << "\n\tYour choice: ";
			cin >> ch;
			switch (ch){
			case 1:
				system("cls");
				cout << "\nEnter a download name : ";
				cin.ignore();
				getline(cin, name);

				time_t rawtime;
				struct tm * timeinfo;
				time(&rawtime);
				timeinfo = localtime(&rawtime);

				name.append("\n  ");
				name.append(asctime(timeinfo));

				stringStack.push(name);
				break;
			case 2:
				system("cls");
				cout << "\n\n" << stringStack.top() << endl;
				break;
			case 3:
				system("cls");
				cout << "\n\n" << stringStack.bottom() << endl;
				break;
			case 4:
				system("cls");
				stringStack.pop();
				break;
			case 5:
				system("cls");
				stringStack.display();
				break;
			case 6:
				exit(0);
			default:
				cout << "*WRONG INPUT*" << endl;
				break;
			}

		}
	}
	catch (exception const& ex){
		cerr << "Exception: " << ex.what() << endl;
		return -1;
	}
	system("PAUSE");
}