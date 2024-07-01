#include "Pizza.h"
#include <iostream>

//Constructor definition and initialization list that assingns which parameters will be passed to their correspoinding parameters
Pizza::Pizza(const std::string& topping, int waitTime, const std::string& size)
	: topping(topping), waitTime(waitTime), size(size) {}

//Member function definition

void Pizza::order() const {
	std::cout << "Ordering a " << size << " inch " << topping << " pizza!" << std::endl;
	std::cout << "Wait time is " << waitTime << " minutes" << std::endl;
}

