#include <iostream>
using namespace std;
class animal {
public:
	animal() : nLegs(2) {
		std::cout << nLegs << " Animal \n";
	};
	int nLegs;
	void eat() { std::cout << " I eat \n"; }
};

class fish : public animal {
public :
	int nFin=1;
	void swim() { std::cout << nLegs << " " << nFin; }
};