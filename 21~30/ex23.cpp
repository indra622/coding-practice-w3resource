#include<iostream>

using namespace std;

bool sol(int a, int b){
    if((a%10)==(b%10)){
        return true;
    }

    return false;
}

int main(void){
    cout << sol(123, 456)<< endl;
    cout << sol(12,512) << endl;
    cout << sol(7, 87) << endl;
    cout << sol(12,45) << endl;

    return 0;
}