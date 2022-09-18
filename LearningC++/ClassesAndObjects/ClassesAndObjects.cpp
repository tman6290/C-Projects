

#include <iostream>
using namespace std;

class Book {

public:
    string title;
    string author;
    int pages;


};

int main() {

    Book b;
    b.title = "Harry Potter";
    b.author = "JK Rowlings";
    b.pages = 250;

    cout << b.pages << endl;
}

