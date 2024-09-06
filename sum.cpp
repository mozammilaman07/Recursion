#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int add = n + sum(n - 1);
    return add;
}

int main()
{
}