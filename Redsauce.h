#ifndef Redsauce_h
#define Redsauce_h

#include "Pizza.h"
class Redsauce : public Pizza {
public:
	virtual float getPrice() { return 8; };
	virtual std::string getDescription() { return "Adding Red sauce"; };
	virtual ~Redsauce() {};
};




#endif //