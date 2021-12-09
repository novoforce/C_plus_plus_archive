#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool find_element(int arr[], int n, int ele)
{
    // I___I____________I
    // base case
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == ele)
    {
        return true;
    }
    // assumption
    bool value = find_element(arr + 1, n - 1, ele);
    // calculation
    return value;
}

bool find_element1(int arr[], int n, int ele)
{
    // I____________I___I
    // base case
    if (n == 0)
    {
        return false;
    }
    if (arr[n-1] == ele)
    {
        return true;
    }
    // assumption
    bool value = find_element1(arr,n-1, ele);
    // calculation
    return value;
}

bool find_element2(int arr[], int n, int ele, int i)
{
    //base case
    //'i' is used as an iterator over the array elements
    if(i == n){
        return false;
    }

    if(arr[i] == ele)
    {
        return true;
    }
    //assumption
    bool value= find_element2(arr,n, ele,i+1);
    //calculation
    return value;
}

int main()
{
    int arr[] = {1, 8, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 31,i=0;
    if (find_element(arr, n, ele))
    {
        cout << "element is found" << endl;
    }
    else
    {
        cout << "element is not found" << endl;
    }

    if (find_element1(arr, n, ele))
    {
        cout << "element is found" << endl;
    }
    else
    {
        cout << "element is not found" << endl;
    }

    if (find_element2(arr, n, ele,i))
    {
        cout << "element is found" << endl;
    }
    else
    {
        cout << "element is not found" << endl;
    }
    return 0;
}