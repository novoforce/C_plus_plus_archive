#include<iostream>

using namespace std;

int fibb(int n){
    //base case
    if(n == 0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    //assumption
    int f_no= fibb(n-1);
    cout << n << f_no << endl;
    int s_no= fibb(n-2);

    return f_no + s_no; //actual calculation

}

int main(){
    int n;
    cin >>n;
    cout << fibb(n);
    return 0;
}
