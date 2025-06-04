// 1_4_Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int testVariable{ 42 }; // Declare and initialize an integer variable
	int testVariable2 = 100; // Declare and initialize another integer variable
	int testVariable3(200); // Declare and initialize a third integer variable using parentheses
	int e{ 9 }, f{ 10 };     // direct-list-initialization
	int i{}, j{};            // value-initialization
    std::cout << "Hello World!\n";
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
