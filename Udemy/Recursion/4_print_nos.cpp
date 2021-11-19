#include <iostream>

using namespace std;


void print_nos_asc(int n){
    if(n == 0){
        return;
    }
    print_nos_asc(n-1);
    cout << n;
}

void print_nos_desc(int n){
    if(n == 0){
        return;
    }
    cout << n;
    print_nos_desc(n-1);
}


int main(){
    int no;
    cin >> no;
    cout << "Ascending order: "<< endl;
    print_nos_asc(no);
    cout << "\n Descending order: "<< endl;
    print_nos_desc(no);
    return 0;
}
