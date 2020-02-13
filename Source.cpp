#include <iostream>
#include"PizzaFactory.h"
#include"AddingTopping.h"
void pizzaInformation(Pizza*&pizza)
	{
	
	std::cout << pizza->getDescription() << std::endl;
	pizza = AddingTopping::createPizz(AddingTopping::DecoratorType::onions);
	
	

	}

	int main(int argc, const char* argv[]) {
		
		Pizza* pizza = PizzaFactory::createPizza(PizzaFactory::ThinCrust);
		pizzaInformation(pizza);
		std::cout << pizza->getDescription() << std::endl;
		return 0;
		



	}
