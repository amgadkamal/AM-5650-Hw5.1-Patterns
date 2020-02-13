#ifndef Caramel_h
#define Caramel_h

#include "Pizza.h"
class Caramel : public Pizza {
public:
	virtual float getPrice() { return 8; };
	virtual std::string getDescription() { return "Adding Caramel"; };
	virtual ~Caramel() {};
};




#endif //
