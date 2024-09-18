#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index)
{
    if (index >= size)
    {
        return true;
    }

    if (arr[index] > arr[index - 1])
    {
        int aagekaAns = checkSorted(arr, size, index + 1);
        return aagekaAns;
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 70};
    int size = 6;
    int index = 1;

    bool ans = checkSorted(arr, size, index);

    if (ans)
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "array is not sorted" << endl;
    }
}