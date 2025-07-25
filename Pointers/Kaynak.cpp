#include <iostream>
using namespace std;

int main() {
	int numbers[4] = { 10,20,30,40 };
	int* ptr = numbers;

	cout << "First element: " << *ptr << endl;
	ptr++;

	cout << "Second element: " << *ptr << endl;
	ptr++;

	cout << "Third element: " << *ptr << endl;
	ptr++;

	cout << "Fourth element: " << *ptr << endl;

	
}



