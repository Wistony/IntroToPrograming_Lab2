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
	
	fileEuro.close();
	
	counts_points(country_list, num);
	rotate_accordingTo_result(country_list, num);

	ofstream top("result.csv");
	
	top << "Position;Country;Result" << endl;
	for (int i = 0; i < 10; i++) {
		top << i + 1 << ";" << country_list[i]->name << ";" << country_list[i]->result << endl;
	}
	

	
	top.close();
	system("pause");
}