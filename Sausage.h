#ifndef Sausage_h
#define Sausage_h

#include "Pizza.h"
class Sausage : public Pizza {
public:
	virtual float getPrice() { return 8; };
	virtual std::string getDescription() { return "Adding Sausage"; };
	virtual ~Sausage() {};
};




#endif //