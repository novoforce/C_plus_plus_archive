#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum_of_array_1(int arr[], int n){

    //base case
    if(n == 0){
        return 0;
    }
    //assumption
    int smallAns= sum_of_array_1(arr+1,n-1);
    // cout << arr+1<< endl;

    //calculation
    return arr[0] + smallAns;
}

int sum_of_array_2(int arr[], int n){

    //base case
    if(n == 0){
        return 0;
    }
    return arr[n-1] + sum_of_array_2(arr,n-1);
}




int main(){
    int arr[] = {1,8,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The sum of arrays:> " << sum_of_array_1(arr,n) << endl;
    cout << "The sum of arrays:> " << sum_of_array_2(arr,n) << endl;


    return 0;
}