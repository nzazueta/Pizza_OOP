// PizzaRestaurantOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pizza.h"

int main()
{
	//Lets create some pizza!
	Pizza pepperoniPizza("Pepperoni", 15, "16");
	Pizza cheesePizza("Cheese", 10, "16");

	pepperoniPizza.order();
	cheesePizza.order();
}

