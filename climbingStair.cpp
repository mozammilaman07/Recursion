#include <iostream>
using namespace std;

int climbingStair(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int ans = climbingStair(n - 1) + climbingStair(n - 2);
    return ans;
}

int main()
{
    int n = 5;
}