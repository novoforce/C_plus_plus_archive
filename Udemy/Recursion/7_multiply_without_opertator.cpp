#include<iostream>

using namespace std;

int multi_without_op(int m, int n){
    //base case
    if(m == 0){
        return 0;
    }
    //assumption
    int mul= multi_without_op(m-1,n);
    //calculation
    return mul + n;
}


int main(){
    int m= 5;
    int n= 4;
    // core logic:> n=4 is added m=5 times
    cout << "the multi is:> " << multi_without_op(m,n);
    return 0;
}
