#include<iostream>
#include<bits/stdc++.h>
using namespace std;


double gSum(int n){
    //base case
    if(n == 0){
        return 1;
    }
    //assumption
    double smallAns= gSum(n-1);

    //calculation
    return smallAns + 1.0/pow(2,n);
}


int main(){
    int no= 3;
    cout << "Geometric sum:> " << gSum(no);

    return 0;
}
