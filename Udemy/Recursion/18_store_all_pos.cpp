#include <bits/stdc++.h>
using namespace std;

void store_all_pos_array(int arr[], int size, int pos, int idx, vector<int> &ans)
{
    // base case
    if (pos == size || size == 0)
    {
        return;
    }

    if (arr[pos] == idx)
    {
        ans.push_back(pos);
    }
    // assumption
    store_all_pos_array(arr, size, pos + 1, idx, ans);
    // calculation
    //  return;
}

void store_all_pos_array_using_array(int arr[], int size, int pos, int idx, int arr_idx[], int pos_j)
{
    // base case
    if (pos == size || size == 0)
    {
        return;
    }
    // assumption
    if (arr[pos] == idx)
    {
        cout << pos << "*";
        arr_idx[pos_j] = pos;
        store_all_pos_array_using_array(arr, size, pos+1, idx, arr_idx, pos_j + 1);
    }
    store_all_pos_array_using_array(arr, size, pos+1, idx, arr_idx, pos_j);

    // calculation

    return;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 4, 7, 2, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos = 0, idx = 2;
    vector<int> ans;
    store_all_pos_array(arr, size, pos, idx, ans);

    cout << "The stored positions are " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ", ";
    }

    int arr_idx[size];
    int pos_j = 0;
    cout << "\n The stored positions using array are " << endl;
    store_all_pos_array_using_array(arr, size, pos, idx, arr_idx, pos_j);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << arr_idx[i] << ", ";
    }

    return 0;
}