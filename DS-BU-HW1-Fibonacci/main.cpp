/*
 * main.cpp
 *
 *      Author: cmshalom
 */
#include <iostream>
#include <string>
using namespace std;

// All functions return the n-th Fibonacci number where
// the 0-th and 1-st Fibonacci numbers are both equal to 1.
// The second parameter is used to return the number of steps.
// Every maximal sequence of C++ commands that take constant time is counted as one step.
extern int fibonacciRecursive(int n, int &steps);              // computes recursively
extern int fibonacciWithMemoization(int n, int &steps);        // computes recursively with memoization
// https://en.wikipedia.org/wiki/Memoization#:~:text=In%20computing%2C%20memoization%20or%20memoisation,the%20same%20inputs%20occur%20again.
extern int fibonacciWithDynamicProgramming(int n, int &steps); // computes using dynamic programming

void print (string algorithm, int n, int result, int steps) {
	cout << algorithm << ":" << "F[" << n << "]=" << result << ", computed in " << steps << " steps" << endl;
}

int main (int argc, char **argv) {

	int steps=0;
	int f = fibonacciRecursive(10, steps);
	print("Recursive", 10, f, steps);

	steps=0;
	f = fibonacciWithMemoization(10, steps);
	print("Recursive with Memoization", 10, f, steps);

	steps=0;
	f = fibonacciWithDynamicProgramming(10, steps);
	print("Dynamic Programming", 10, f, steps);

	steps=0;
	f = fibonacciWithMemoization(40, steps);
	print("Recursive with Memoization", 40, f, steps);

	steps=0;
	f = fibonacciWithDynamicProgramming(40, steps);
	print("Dynamic Programming", 40, f, steps);

}
