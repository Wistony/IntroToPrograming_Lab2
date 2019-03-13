#include "Header.h"

int main() {
	ifstream fileEuro("eurovision.csv");
	if (!fileEuro)
		cout << " File doesn`t open ";

	string number;
	getline(fileEuro, number);
	int num = stoi(number);

	cout << num;



	system("pause");
}