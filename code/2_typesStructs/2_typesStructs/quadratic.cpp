#include <string>
#include <iostream>
#include <cmath> //gives us pow and sqrt!

using std::string; using std::cout;
using std::cin; using std::pow;
using std::sqrt; using std::endl;

//want: a function named quadratic that will take in 3 doubles and return
//a combination of: does a solution exist, and if so, what is it?
	//get radical, test if negative, return indicating no roots
	// radical = b^2 - 4ac
	
	//otherwise get roots and return
	// root1 = (-b + sqrt(radical)) divided by 2a
	// root2 = (-b - sqrt(radical)) divided by 2a

int main() {
	//get 3 doubles (ax^2 + bx + c)
	double a, b, c;
	cout << "Give me 3 coefficients: " << endl;
	
	//This line gets 3 numbers from user input and stores them in a, b and c 
	//we will learn more about cin on Thursday
	cin >> a >> b >> c;

	//some call to quadratic function!

	//get roots if they exist

	//print accordingly
	return 0;
}

// Test: x^2 + 5x + 6 = 0, roots = -3, -2

// To run: first compile code --> make quadratic, 
// then run the compiled code --> ./quadratic