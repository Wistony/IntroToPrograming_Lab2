#include "Header.h"

int main() {
	ifstream fileEuro("eurovision.csv");
	if (!fileEuro)
		cout << " File doesn`t open ";

	string number, str;
	getline(fileEuro, number);
	int num = stoi(number);

	Country **list = new Country*[num];

	for (int i = 0; i < num; i++) {
		Country* country = new Country(20);
		string str;
		getline(fileEuro, str);
		country->country_get_info(str, num);
		list[i] = country;
	}

	cout << list[0]->name;
	cout << list[1]->name;
	cout << list[2]->name;

	for (int i = 0; i < num; i++) {
		cout << list[0]->mark[i] << " ";


	}


	system("pause");
}