#include <iostream>
#include <cstring>  // For strlen
using namespace std;

int main() {
	// Step 1: Allocate memory for the string
	int size;
	cout << "Enter the maximum size of the string: ";
	cin >> size;

	// Clear the newline character left in the input buffer
	cin.ignore();

	char* str = new char[size + 1]; // +1 for null terminator

	// Step 2: Take input from the user
	cout << "Enter a string: ";
	cin.getline(str, size + 1);  // Read up to 'size' characters

	// Step 3: Reverse the string in-place
	int len = strlen(str);
	for (int i = 0; i < len / 2; ++i) {
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}

	// Step 4: Display the reversed string
	cout << "Reversed string: " << str << endl;

	// Step 5: Free the allocated memory
	delete[] str;

	return 0;
}
