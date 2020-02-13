#ifndef Onion_h
#define Onion_h

#include "Pizza.h"
class Onion : public Pizza {
public:
	virtual float getPrice() { return 8; };
	virtual std::string getDescription() { return "Adding Onion"; };
	virtual ~Onion() {};
};




#endif //




