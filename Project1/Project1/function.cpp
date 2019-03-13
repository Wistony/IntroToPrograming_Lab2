#include "Header.h"

void Country::country_get_info(string str, int num) {
	int position = str.find(",");
	name = str.substr(0, position);
	str = str.substr(position + 1, str.length());



}