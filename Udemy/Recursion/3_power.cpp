#include<iostream>

using namespace std;

int power(int no, int pow){
    //base case
    if(pow == 0){
        return 1;
    }
    int smallno= power(no,pow-1);
    return no*smallno;
}




int main(){
    int no,pow;
    cin >> no >> pow;
    int n= power(no,pow);

    cout << n;


    return 0;

}
