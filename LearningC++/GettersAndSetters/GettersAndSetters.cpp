#include <iostream>

using namespace std;


class Movie {

private:
	string rating;

public:
	string title;
	string director;

	Movie(string aTitle, string aDirector, string aRating) {

		title = aTitle;
		director = aDirector;
		setRating(aRating);

	}

	void setRating(string rating) {

		if (rating == "PG" || rating == "PG13" || rating == "R") {

			this->rating = rating;

		}
		else {

			this->rating = "NR";
		}

	}

	string getRating() {

		return rating;
	}

};


int main() {

	Movie m1("Harry Potter", "Somebody", "R");

	cout << m1.getRating() << endl;

}
