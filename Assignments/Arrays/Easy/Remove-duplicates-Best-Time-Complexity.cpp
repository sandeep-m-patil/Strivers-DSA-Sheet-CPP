
#include <bits/stdc++.h>
using namespace std;

// Best Time Complexity is O(n)
int removeDuplicates(int nums[], int n)
{
    if (n == 0)
        return 0;

    int uniqueCount = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[uniqueCount] = nums[i];
            uniqueCount++;
        }
    }

    return uniqueCount;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = removeDuplicates(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    /*
   Output:
   1 2 3
   */
    return 0;
}
