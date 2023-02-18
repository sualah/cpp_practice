#include <iostream>
/*
 * Author: Salifu Abdullai
 * swap value of two varaiable
 */

using namespace std;

int main() {
	int a = 5;
	int b = 7;

	std::cout << "Before swap " << endl;
	std::cout << "a: " << a << endl;
	std::cout << "b: " << b << endl;

	int temp = a;

	a = b;
	b = temp;
        
	std::cout << "After swap: " << endl;
	std::cout << "a: " << a << endl;
	std::cout << "b: " << b << endl;
	return 0;
}
