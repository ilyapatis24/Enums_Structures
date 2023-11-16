#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

struct Person {
	string name = "";
	int account_number = 0;
	double balance = 0;
};

void person_info(Person& person) {
	cout << "Введите номер счёта: ";
	cin >> person.account_number;
	cout << endl;
	cout << "Введите имя владельца: ";
	cin >> person.name;
	cout << endl;
	cout << "Введите баланс: ";
	cin>> person.balance;
	cout << endl;
	cout << "Введите новый баланс: ";
	cin >> person.balance;
	cout << endl;
	cout << "Ваш счет: " << person.name << ", " << person.account_number << ", " << person.balance;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	struct Person person;
	person_info(person);
	return 0;
}