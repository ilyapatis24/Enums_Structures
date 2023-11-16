# include <iostream>
#include <locale.h>


enum Months {
	january = 1,
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	october,
	november,
	december
};


void get_month() {
	int user_month = 0;
	Months month;
	do {
		std::cout << "������� ����� ������:" << " " << std::endl;
		std::cin >> user_month;
		month = static_cast<Months>(user_month);
		switch (month) {
			case january: std::cout << "������" << std::endl; break;
			case february: std::cout << "�������" << std::endl; break;
			case march: std::cout << "����" << std::endl; break;
			case april: std::cout << "������" << std::endl; break;
			case may: std::cout << "���" << std::endl; break;
			case june: std::cout << "����" << std::endl; break;
			case july: std::cout << "����" << std::endl; break;
			case august: std::cout << "������" << std::endl; break;
			case september: std::cout << "��������" << std::endl; break;
			case october: std::cout << "�������" << std::endl; break;
			case november: std::cout << "������" << std::endl; break;
			case december: std::cout << "�������" << std::endl; break;
			default:
				if (month == 0) {
					break;
				}
				else { std::cout << "������������ �����!" << std::endl; }

		}
	} 
	while (user_month != 0);
	std::cout << "�� ��������";
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	get_month();
	return 0;
}