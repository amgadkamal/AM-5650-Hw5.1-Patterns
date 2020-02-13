#ifndef Mushrooms_h
#define Mushrooms_h

#include "Pizza.h"
class Mushrooms : public Pizza {
public:
	virtual float getPrice() { return 8; };
	virtual std::string getDescription() { return "Adding Mushrooms"; };
	virtual ~Mushrooms() {};
};




#endif //