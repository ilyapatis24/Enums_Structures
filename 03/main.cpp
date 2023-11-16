#include <iostream>
#include <string>

using namespace std;

struct Address {
	string city = "";
	string street = "";
	int building = 0;
	int apartment = 0;
	int index = 0;
};

void print_address(Address& address) {
	cout << "Город: " << address.city << endl;
	cout << "Улица: " << address.street << endl;
	cout << "Номер дома: " << address.building << endl;
	cout << "Номер квартиры: " << address.apartment << endl;
	cout << "Индекс: " << address.index << endl;
}

int main(int argc, char** argv) {
	system("chcp 1251");
	struct Address address1 = {"Cherepovets", "Mira", 23, 15, 160022};
	struct Address address2 = { "Vologda", "Gagarina", 15, 21, 160009 };
	print_address(address1);
	cout << endl;
	print_address(address2);
	return 0;
}