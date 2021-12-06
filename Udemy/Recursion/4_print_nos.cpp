#include <iostream>

using namespace std;


void print_nos_asc(int n){
    //base case
    if(n == 0){
        return;
    }
    //calculation
    print_nos_asc(n-1);
    //assumption
    cout << n;
}

void print_nos_desc(int n){
    //base case
    if(n == 0){
        return;
    }
    //assumption
    cout << n;
    //calculation
    print_nos_desc(n-1);
}


int main(){
    int no= 5;
    // cin >> no;
    cout << "Ascending order: "<< endl;
    print_nos_asc(no);
    cout << "\n Descending order: "<< endl;
    print_nos_desc(no);
    return 0;
}
