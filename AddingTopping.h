#ifndef AddingTopping_h
#define AddingTopping_h


#include "Pizza.h"
#include "Caramel.h"
#include"Mushrooms.h"
#include"Onion.h"
#include"Redsauce.h"
#include"Sausage.h"

class AddingTopping{


public:
	enum DecoratorType {

		caramel,
		mushrooms,
		onions,
		redsauce,
		sausage

	};
	static Pizza* createPizz(DecoratorType DType) {


		switch (DType) {
		case onions:
			return new Onion();

		
		case caramel:
			return new Caramel();


		case mushrooms:
			return new Mushrooms();

		case redsauce:
			return new Redsauce();

		case sausage:
			return new Sausage();

	    }


		
	}
	
	


	


};



#endif