#include<iostream>

using namespace std;

int count(int no){
    if(no == 0){
        return 0;
    }

    int smallAns= count(no/10);
    return smallAns+1; //incrementing the counter
}


int main(){
    int no;
    cin >> no;
    cout <<"the count:> "<<count(no);
    return 0;

}
