#include <iostream>
#include <iomanip> // pentru precizia cifrelor dupa virgula
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main() {
	double balance = 0;
	int choice = 0;
	do {
		cout << "#########################" << endl;
		cout << "1.Interogare depozit" << endl;
		cout << "2.Depunere " << endl;
		cout << "3.Retragere" << endl;
		cout << "4.Iesire" << endl;
		cout << "#########################" << endl;
		cout << "Alege o categorie: ";
		cin >> choice;
		cout << endl;
		switch(choice) {
			case 1:
				showBalance(balance);
				break;
			case 2:
				balance += deposit();
				showBalance(balance);
				break;
			case 3:
				balance -= withdraw(balance);
				showBalance(balance);
				break;
			case 4:
				cout << "Multumim pentru vizita!" << endl;
				break;
			default:
				cout << "Alegere nevalida!" << endl;
				break;
		}
	} while(choice != 4);
	return 0;
}

void showBalance(double balance) {
	cout << "In depozit ai Ron " << setprecision(2) << fixed << balance << endl; // setprecision(2)<<fixed pentru precizia .00
}

double deposit() {
	double amount = 0;
	cout << "Introdu suma pentru depozitare" << endl;
	cin >> amount;
	cout << endl;
	if(amount > 0) {
		return amount;
	} else {
		cout << amount << " nu este o suma valida!" << endl;
		return 0;
	}
}

double withdraw(double balance) {
	double amount = 0;
	cout << "Introdu o suma pentru retragere: ";
	cin >> amount;
	amount = amount < 0 ? 0 - amount : amount;
	if(balance < amount ) {
		cout << "Nu sunt suficiente fonduri!" << endl;
		return 0;
	} else {
		return amount;
	}
}
