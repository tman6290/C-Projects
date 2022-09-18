

#include <iostream>
using namespace std;

class Book {

public:
    string title;
    string author;
    int pages;

    Book(string aTitle, string anAuthor, int numPages) {

        title = aTitle;
        author = anAuthor;
        pages = numPages;

    }

    Book() {

        title = "NULL";
        author = "NULL";
        pages = 0;
    }


};

int main() {

    Book b("James Bond", "Somebody", 300);
    Book c;
    

    cout << b.pages << endl;
    cout << c.author << endl;
}

