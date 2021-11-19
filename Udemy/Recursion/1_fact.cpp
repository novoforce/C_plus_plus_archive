#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    //breaking condition
    if(n == 0){
        return 1;
    }

    int small= fact(n-1);
    return n*small;
}


int main(){
    int no;
    cout<<"enter no ";
    cin>>no;

    cout<<fact(no);

return 0;
}
