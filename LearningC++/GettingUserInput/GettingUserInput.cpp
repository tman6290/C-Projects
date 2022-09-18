

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string name;
    cout << "What is your name?" << endl;
    getline(cin, name);
    
    int age;
    cout << "Enter your age please:" << endl;
    cin >> age;

    cout << "Your name is " << name << endl;
    cout << "AND" << endl;
    cout << "You are " << age << " years old!" << endl;

}

