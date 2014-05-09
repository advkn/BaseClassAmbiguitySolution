/*By making the Derived Classes Virtual, we solve the Base class ambiguity
by allowing them to share a single instance of the base class.*/

#include <iostream>
using namespace std;

class Base {
protected:
	int iData;

public:
	Base() {
		iData = 10;
	}
};

class Derived1 : virtual public Base {
};

class Derived2 : virtual public Base {
};

class Derived3 : public Derived1, public Derived2 {
public:
	int GetData() {
		return iData;
	}
};


void main() {
	Derived3 obj3; 
	cout << obj3.GetData() << endl;

	getchar();
}
