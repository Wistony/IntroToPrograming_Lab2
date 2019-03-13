#include "Header.h"

void Country::country_get_info(string str, int num) {
	int position = str.find(",");
	name = str.substr(0, position);
	str = str.substr(position + 1, str.length());

	for (int i = 0; i < num; i++) {
		position = str.find(",");
		string MARK = str.substr(0, position);
		mark[i] = stoi(MARK);
		str = str.substr(position + 1, str.length());
	}
}