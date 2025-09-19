#include <iostream>
using namespace std;

// Function that accepts a pointer, prints its address and the value it points to
void analyze_pointer(int *ptr) {
	cout << "Memory address: " << ptr << endl;
	cout << "Value at address: " << *ptr << endl;
}
int main() {
	// STACK ALLOCATION
	int iValue = 42; // Declare and assign value
	cout << "Analyzing stack variable:" << endl;
	analyze_pointer(&iValue); // Pass the address

	cout << endl;

	// HEAP ALLOCATION
	int* pValue = new int; // Allocate memory on the heap
	*pValue = 99;          // Assign value
	cout << "Analyzing heap variable:" << endl;
	analyze_pointer(pValue); // Pass the pointer

	// Clean up heap memory
	delete pValue;

	return 0;
}
