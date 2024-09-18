#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int s, int e, int target)
{

    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[mid] > target)
    {
        return binarySearch(arr, size, s, mid - 1, target);
    }
    else
    {
        return binarySearch(arr, size, mid + 1, e, target);
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int s = 0;
    int e = size - 1;
    int target = 55;

    int finalAns = binarySearch(arr, size, s, e, target);

    if (finalAns == -1)
    {
        cout << "Target not found" << endl;
    }
    else
    {
        cout << "Target found at index : " << finalAns << endl;
    }
}