#include <iostream>
using namespace std;

void counting(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    counting(n - 1);
}

int main()
{
    counting(10);
    // cout << counting(10) << endl;
}