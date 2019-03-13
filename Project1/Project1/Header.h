#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Country {
public:
	string name;
	int* mark;
	int result;

	Country(int num) {
		name = "";
		mark = new int[num];
		result = 0;
	}

	~Country();

	void country_get_info(string str, int num);
};

void counts_points(Country**, int);
void rotate_accordingTo_result(Country**, int);