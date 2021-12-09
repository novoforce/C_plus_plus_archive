#include <bits/stdc++.h>
using namespace std;

void count_occ_element(int arr[], int size, int pos, int idx, int &ans)
{
    // base case
    if (pos == size)
    {
        return;
    }

    if (arr[pos] == idx)
    {
        ans++;
        // cout << pos;
    }
    // assumption
    count_occ_element(arr, size, pos + 1, idx, ans);
    // calculation
    // return;
}

int main()
{
    int arr[] = {5, 5, 6, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos = 0;
    int idx = 5;
    int ans = 0;
    count_occ_element(arr, size, pos, idx, ans);
    cout << ans;
    return 0;
}