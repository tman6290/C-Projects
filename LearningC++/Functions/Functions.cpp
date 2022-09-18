

#include <iostream>
using namespace std;

void sayHi() {

    cout << "HIIIII!!!" << endl;

}

void sayHiAgain() {

    cout << "I SAID HI!!! :)" << endl;

}

void hello();

void introduction(string name, int age) {

    cout << "Hello, my name is " << name << '.' << " I am " << age << " years old!" << endl;
}


int main() {
    
    cout << "Sup bro!" << endl;
    sayHi();
    sayHiAgain();
    introduction("Tofarati Farinu", 21);
    hello();

}

void hello() {

    cout << "Hello World!" << endl;

}


