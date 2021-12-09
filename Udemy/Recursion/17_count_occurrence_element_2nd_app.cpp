#include <bits/stdc++.h>

using namespace std;

int count_occurrences(int arr[], int size, int idx, int pos)
{
    // base case
    if (pos == size)
    {
        return 0;
    }
    if (arr[pos] == idx)
    {
        // assumption
        int val = count_occurrences(arr, size, idx, pos + 1);
        // calculation
        return 1 + val;
    }
    else
    {
        return 0 + count_occurrences(arr, size, idx, pos + 1);
    }
}

int main()
{
    int arr[] = {5, 5, 6, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int idx = 7;
    int pos = 0;
    cout << count_occurrences(arr, size, idx, pos) << endl;
    return 0;
}