#include "Header.h"

int main() {
	ifstream fileEuro("eurovision.csv");
	if (!fileEuro)
		cout << " File doesn`t open ";

	string number, str;
	getline(fileEuro, number);
	int num = stoi(number);

	Country ukr(2);

	for (int i = 0; i < 2; i++) {
		getline(fileEuro, str);
		int position = str.find(",");
		ukr.name = str.substr(0, position);
		str = str.substr(position + 1, str.length());

		for (int i = 0; i < num; i++) {
			position = str.find(",");
			string mark = str.substr(0, position);
			ukr.mark[i] = stoi(mark);
			str = str.substr(position + 1, str.length());
		}

	}
	
	for (int i = 0; i < 2; i++)
		cout << ukr.name << endl;
	for (int i = 0; i < 2; i++) {
		for (int i = 0; i < num; i++)
			cout << ukr.mark[i] << " ";

		cout << endl << endl;
	}




	system("pause");
}