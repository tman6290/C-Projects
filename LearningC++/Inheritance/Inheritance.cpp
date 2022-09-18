#include <iostream>

using namespace std;


class Chef {


public:
	string name;
	string restaurant;

	void canCook() {

		cout << "The chef has started to cook!" << endl;
	}

	void cookSpecialDish(string dishName) {

		cout << "The chef is making " << dishName << '!' << endl;

	}

};


class ItalianChef : public Chef {

	
};


int main() {

	Chef c1;
	c1.canCook();

	ItalianChef ic;
	ic.cookSpecialDish("Pasta");

}