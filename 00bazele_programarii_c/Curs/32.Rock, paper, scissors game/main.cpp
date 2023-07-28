#include <iostream>
using namespace std;
#include <ctime>

char getUserChoice();
char getComputerChoise();
void showChoise(char choise);
void chooseWinner(char player,char computer);

int main() {
	char player;
	char computer;

	player = getUserChoice();
	cout << "Alegerea ta: ";
	showChoise(player);

	computer = getComputerChoise();
	cout << "Alegerea calculatorului: ";
	showChoise(computer);

	chooseWinner(player, computer);
	return 0;
}
char getUserChoice() {
	char player;

	cout <<"########################" <<endl;
	cout <<"Jocul Piatra-Foarfeca-Hartie" <<endl;
	cout <<"########################" <<endl;

	do {
		cout <<"Alege o varianta!" <<endl;
		cout << "'p' pentru Piatra" <<endl;
		cout << "'h' Pentru Hartie" <<endl;
		cout <<"'f' Pentru foarfeca" <<endl;
		cin >> player;
	} while(player != 'r' && player != 'p' && player != 's');
	return player;
}

char getComputerChoise() {
	srand(time(0));
	int num = rand() % 3 + 1;

	switch(num) {
		case 1:
			return 'p';
		case 2:
			return 'h';
		case 3:
			return 'f';
	}
	return 0;
}

void showChoise(char choise) {

	switch(choise) {
		case 'p':
			cout << "Piatra" << endl;
			break;
		case 'h':
			cout << "Hartie" << endl;
			break;
		case 'f':
			cout << "Foarfeca" <<
				endl;
			break;
	}
}

void chooseWinner(char player,char computer) {

    switch(player){
         case 'p': if(computer == 'r') {
           	     cout << "remiza";
                 } else if(computer == 'p') {
                 	cout << "ai pierdut";
                 } else {
                 	cout << "ai castigat";
                 }
           break;

            case 'h': if(computer == 'r') {
           	     cout << "ai pierdut";
                 } else if(computer == 'p') {
                 	cout << "remiza";
                 } else {
                 	cout << "ai castigat";
                 }
           break;

            case 'f': if(computer == 'r') {
           	     cout << "Ai pierdut";
                 } else if(computer == 'p') {
                 	cout << "Ai castigat";
                 } else {
                 	cout << "Remiza";
                 }
           break;


    }

}
