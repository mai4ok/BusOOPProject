#pragma once
#include <iostream>
#include <string>

class Bus {
public:

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

string convert() {
	string msg = "Bus: ";
	+ "brand = " + brand
		+ ", number = " + number
		+ ", price = " + to_string(price)
		+ ", capacity = " + to_string(capacity)
}