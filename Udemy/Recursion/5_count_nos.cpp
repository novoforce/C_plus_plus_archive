#include<iostream>

using namespace std;

int count(int no){
    //base case
    if(no == 0){
        return 0;
    }
    //assumption
    int smallAns= count(no/10); // breaking of the numbers
    //calculation
    return smallAns+1; //incrementing the counter
}


int main(){
    int no=40000;
    // cin >> no;
    cout <<"the count:> "<<count(no);
    return 0;

}
