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

void amount_of_points(Country**, int);