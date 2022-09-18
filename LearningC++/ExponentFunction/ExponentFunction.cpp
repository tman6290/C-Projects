

#include <iostream>
using namespace std;

int power (int baseNumber, int exponentNumber) {

	int i;
	int ans = 1;
	

	for (i = 0; i < exponentNumber; i++) {
		
		 ans = ans * baseNumber;
	}

	return ans;

}

int main() {

	cout << power(2, 8) << endl;
}
