#pragma once
#ifndef Pizza_h
#define Pizza_h

#include <string>

//Decare the functions for making a pizza and estimated wait time

class Pizza {
public:
	//Constructor declaration
	Pizza(const std::string& topping, int waitTime, const std::string& size);

	//Member function declaration
	void order() const;
private:
	std::string topping;
	int waitTime;
	std::string size;
};

#endif // !Pizza_h

