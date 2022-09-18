
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string colour, pluralNoun, celebrity;

    cout << "Enter a colour:" << endl;
    getline(cin, colour);
    cout << "Enter a Plural Noun:" << endl;
    getline(cin, pluralNoun);
    cout << "Enter the name of a celebrity:" << endl;
    getline(cin, celebrity);
    
    cout << "Roses are " << colour << '.' << endl;
    cout << "Violets are " << pluralNoun << '.' << endl;
    cout << "I love " << celebrity << '.' << endl;
}

