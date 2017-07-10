#include <iostream>

using namespace std;

class Game{
public:
	int userChoice;
	int game;

	//THE BRAINS
	int error();
	int rock();
	int paper();
	int scissor();
	//THE DECISION MAKER
	void compare();
	//THE LOGIC MAKER
	void logic();
};

int Game::error() {
	return 0;
}
void Game::logic(){
	int computerChoice = rand() % 3 + 1;
	if (computerChoice == 1) {
		game = rock();
	}
	else if (computerChoice == 2) {
		game = paper();
	}
	else if (computerChoice == 3) {
		game = scissor();
	}
	else {
		cout << "Wrong input" << endl;
		error();
	}
	compare();
}
void Game::compare(){
	if (game == userChoice) {
		cout << "The result is a tie!" << endl;
	}
	else if (game == 1 && userChoice == 3) {
		cout << "Computer wins!" << endl;
	}
	else if (game == 2 && userChoice == 1) {
		cout << "Computer wins!" << endl;
	}
	else if (game == 3 && userChoice == 2) {
		cout << "Computer wins!" << endl;;
	}
	else if (userChoice == 1 && game == 3) {
		cout << "User wins!" << endl;
	}
	else if (userChoice == 2 && game == 1) {
		cout << "User wins!" << endl;;
	}
	else if (userChoice == 3 && game == 2) {
		cout << "User wins!" << endl;
	}
	else if (userChoice == 4) {
		cout << "Thankyou for playing" << endl;
		exit(1);
	}
	else{
		cout << "Wrong Input" << endl;
	}
}
int Game::rock() {
	return 1;//return "rock"
}
int Game::paper() {
	return 2;//return "paper";
}
int Game::scissor() {
	return 3;//return "scissor";
}



int main(){
	Game game;
	cout << "******************ROCK PAPER SCISSOR GAME******************" << endl;
	while (2){
		cout << "\n\t\t\t|1. Rock |2. Paper |3. Scissor |4. Exit |\n\t\tEnter your choice : ";
		cin >> game.userChoice;
		game.logic();
	}
	system("pause");
	return 0;
}