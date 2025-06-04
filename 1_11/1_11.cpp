// 1_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

int main() // note: this program has an error somewhere
{
	int num{ 0 }; // define variable num as an integer variable
	std::cout << "Enter an integer: ";

	std::cin >> num; // get integer value from user's keyboard

	std::cout << "You entered: " << num << std::endl; // output the value of num
	std::cout << "Double " << num << " is " << num*2 << std::endl; // output the value of num


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
