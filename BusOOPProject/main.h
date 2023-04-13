#pragma once
#include <iostream>
#include <string>

using namespace std;
class Bus {
public:
	//Bus 1: MAZ, 1234PM7, $14000, 10 - $1400
	//Bus 2: Paz, 2345PM7, $23500, 15 - $1567
	//Bus 3: Mersedes Benz, 3456PM7, $21650, 17 - $1274
	//Bus 4: Scania, 4567PM7, $45000, 30 - $1500
	//Bus 5: Neoplan, 5678PM7, $113000, 87 - $1299

	string brand;
	string number;
	int price;
	int capacity;

	Bus() {
		brand = "not specified";
		number = "XXXXPM7";
		price = 0;
		capacity = 0;
	}

	Bus(string brnd, string num, int prc, int cpct) {
		brand = brnd;
		number = num;
		price = prc;
		capacity = cpct;
	}
};
