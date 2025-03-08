#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 1;
    }

    // recursive call
    int ans = n * factorial(n - 1);
    return ans;
}

void fibonacci(int n)
{
}

int main()
{

    int a = 5;
    int finalAns = factorial(a);
    cout << finalAns << endl;
}