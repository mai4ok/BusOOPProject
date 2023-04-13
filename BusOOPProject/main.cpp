#include "main.h"
#include "bus.h"
#include "manager.h"

int main() {
	Bus bus1("MAZ", "1234PM7", 14000, 10);
	Bus bus2("PAZ", "2345PM7", 23500, 15);
	Bus bus3("Mersedes Benz", "3456PM7", 21650, 17);    //1
	Bus bus4("Scania", "4567PM7", 45000, 30);
	Bus bus5("Neoplan", "5678PM7", 113000, 87);         //2

	Bus buses[5];
	buses[0] = bus1;
	buses[1] = bus2;
	buses[2] = bus3;
	buses[3] = bus4;
	buses[4] = bus5;

	Manager manager;

	Bus result = manager.find_bus_with_first_min_price(buses, 5);

	cout << result.convert() << endl;


	return 0;
}