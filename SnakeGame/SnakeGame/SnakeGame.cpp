

#include <iostream>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection {STOP = 0, UP, DOWN, LEFT, RIGHT};
eDirection dir;

void setup() {

	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;

}

void draw() 
{
	system("cls");
	for (int i = 0; i < width + 2; i++) 
		cout << "#";
	cout << endl;

	for (int i = 0; i < height; i++) 
	{
		for (int j = 0; j < width; j++) 
		{
			if (j == 0) 
				cout << "#";

				cout << " ";
			
			if (j == width - 1) 
				cout << "#";	
		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++) 
		cout << "#";
	cout << endl;
}
	

void input() {



}

void logic() {



}


int main() {

	setup();
	while (!gameOver) {

		draw();
		input();
		logic();
		

	}

}
