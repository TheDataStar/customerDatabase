// CS233T Unit 1 Submission 1 Assignment, Adam G. (22579036), (May, 2020).
// Basic customer application with stored values, arrays can hold up to 15 values a piece, 5 values have been stored in each.

#include <iostream>
#include <string>

int main()
{
	std::string customerName[15] = {"Fred", "Bill", "Janice", "Laura","Ken"};
	std::string customerAddress[15] = {"Fred'sAddress", "Bill'sAddress", "Janice'sAddress", "Laura'sAddress", "Ken'sAddress"};
	std::string city[15] = {"Summerville", "Fallberg", "Springtown", "Winterton", "Seasondale"};
	std::string state[15] = {"WA", "CO", "AL", "GE", "CA"};
	int zip[15] = {1001, 1002, 1003, 1004, 1005}; // 5 zip codes to be looped through and values to be returned.

	for (int i = 0; i < 5; i++) {
		std::cout << i << ": " << zip[i] << "\n";
	}
	return 0;
}

