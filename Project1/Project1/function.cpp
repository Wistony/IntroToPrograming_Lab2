#include "Header.h"

void Country::country_get_info(string str, int num) {
	int position = str.find(",");
	name = str.substr(0, position);
	str = str.substr(position + 1, str.length());

	for (int i = 0; i < num; i++) {
		position = str.find(",");
		string rating = str.substr(0, position);
		mark[i] = stoi(rating);
		str = str.substr(position + 1, str.length());
	}
}

Country::~Country() {
	delete[] mark;
}

void amount_of_points(Country** country_list,int num) {
	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++)
			country_list[i]->result += country_list[i]->mark[j];
}