#include<iostream>

using namespace std;

int multi_without_op(int m, int n){

    if(m == 0){
        return 0;
    }

    int mul= multi_without_op(m-1,n) + n;

    return mul;
}


int main(){
    int m= 5;
    int n= 4;

    cout << "the multi is:> " << multi_without_op(m,n);
    return 0;
}
