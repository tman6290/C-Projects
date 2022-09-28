#include <iostream>
using namespace std;
// access modifiers in c++ are set to private by default.

class Employee {

public:
    string name;
    string company;
    int age;

    Employee(string name, string company, int age) {

        this->name = name;
        this->age = age;
        this->company = company;

    }

    void introduceYourself(Employee emp) {

        cout << "My name is " << emp.name << "." << endl;
        cout << "I am " << emp.age << " years old." << endl;
        cout << "I work at " << emp.company << "." << endl;
        cout << "Nice to meet you!" << endl;

    }
    // Note: protected will not work when trying to access attributes from the same file (just like private).

};

int main() {

    Employee emp1("Tofarati Farinu", "Halogen Group", 21);

    
    emp1.introduceYourself(emp1);

}