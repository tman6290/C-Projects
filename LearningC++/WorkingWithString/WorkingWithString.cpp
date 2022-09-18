

#include <iostream>
using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    
    cout << phrase.length() << endl;
    cout << phrase.find("Academy", 0) << endl;
    cout << phrase.substr(4, 5) << endl;
    cout << phrase[5] << endl;
    phrase[2] = '9';
    cout << phrase << endl;
}

