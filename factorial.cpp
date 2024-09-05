#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int recursionkaAns = n * factorial(n - 1);
    return recursionkaAns;
}

int main()
{
    cout << factorial(5) << endl;
}