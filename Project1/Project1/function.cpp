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

void counts_points(Country** country_list, int num) {
	int result[10] = { 12,10,8,7,6,5,4,3,2,1 };

	for (int k = 0; k < num; k++) {
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num - 1; j++) {
				if (country_list[j]->mark[k] < country_list[j + 1]->mark[k]) {
					swap(country_list[j], country_list[j + 1]);
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			country_list[i]->result += result[i];
		}
	}
}

void rotate_accordingTo_result(Country** country_list, int num) {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - 1; j++) {
			if (country_list[j]->result < country_list[j + 1]->result)
				swap(country_list[j], country_list[j + 1]);
		}
	}
}