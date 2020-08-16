#include <iostream>
#include <string>
#define N 1000
using namespace std;
int cache[N];

int fibonacciRecursive(int n, int &steps)
{
    steps++;
    return n = n<=1 ? 1 : fibonacciRecursive(n-1, steps)+fibonacciRecursive(n-2, steps);
}
int fibonacciWithMemoization(int n, int &steps)
{
    steps++;
    if (cache[n] != 0)  return cache[n];
    else if (n<=1)  return 1;
    else    cache[n] = fibonacciWithMemoization(n - 1,steps) + fibonacciWithMemoization(n - 2,steps);
    return cache[n];
}
int fibonacciWithDynamicProgramming(int n, int &steps)
{
    steps++;
    int fibonacciWithDynamicProgramming[n+2];
    fibonacciWithDynamicProgramming[0] = 1;
    fibonacciWithDynamicProgramming[1] = 1;
    for (int i = 2; i <= n; i++){
        steps++;
        fibonacciWithDynamicProgramming[i] = fibonacciWithDynamicProgramming[i-1] + fibonacciWithDynamicProgramming[i-2];
    }
    return fibonacciWithDynamicProgramming[n];}
