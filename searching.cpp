#include <iostream>
using namespace std;

bool searching(int arr[], int size, int index, int target)
{
    if (index >= size)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }

    int ans = searching(arr, size, index + 1, target);
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int target = 60;
    int answer = searching(arr, size, index, target);

    cout << "target found or not: " << answer << endl;
    // if (searching == 1)
    // {
    //     cout << "found" << endl;
    // }
    // else
    // {
    //     cout << "not found" << endl;
    // }
}