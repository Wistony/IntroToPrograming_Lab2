#include "Header.h"

int main() {
	ifstream fileEuro("eurovision.csv");
	if (!fileEuro)
		cout << " File doesn`t open ";

	string number, str;
	getline(fileEuro, number);
	int num = stoi(number);

	Country **country_list = new Country*[num];

	for (int i = 0; i < num; i++) {
		Country* country = new Country(20);
		string str;
		getline(fileEuro, str);
		country->country_get_info(str, num);
		country_list[i] = country;
	}
	
	counts_points(country_list, num);
	
	



	fileEuro.close();
	system("pause");
}