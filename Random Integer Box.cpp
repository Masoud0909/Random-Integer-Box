/*Write a program that generates a random integer n between 1 and 100. Display the number generated, then using loops, print the numbers 1 .. n, eight numbers per line. Numbers should be printed in a field width of 4 characters each.*/

#include <iostream> 
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

	srand(time(NULL));
	int random = rand() % 100 + 1;
	cout << "Random Welcome! " << endl;

	for (int i = 1; i <= random; i++) {
		cout << setw(4) << i;
		if (i % 8 == 0) {
			cout << endl;
		}

	}
}