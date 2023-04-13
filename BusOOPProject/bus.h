#include"main.h"
#pragma once

class Bus {
public:
	string brand;
	string number;
	int  price;
	int capacity;

	Bus() {
		brand = " no brand";
		number = "XXXXPM&";
		price = 0;
		capacity = 0;;

	}

	Bus(string brnd, string num, int prc, int cpct) {
		brand = brnd;
		number = num;
		price = prc;
		capacity = cpct;
	}

	string convert() {
		string msg = "";
		msg += brand;
		msg += "," + number;
		msg += "," + to_string(price);
		msg += "," + to_string(capacity);

		return msg;
	}
};