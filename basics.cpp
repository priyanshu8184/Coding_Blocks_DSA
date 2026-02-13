#include <iostream>
using namespace std;

int main() {
	cout << "Hello, World!" << endl;
	cout << "Enter two integers separated by space: ";
	int a, b;
	if (!(cin >> a >> b)) {
		cerr << "Invalid input\n";
		return 1;
	}
	cout << "Sum: " << (a + b) << endl;
	return 0;
}
