#include<iostream>

using namespace std;

bool sol(int a){
    if(a % 3 == 0 || a % 7 ==0){
        return true;
    }
    return false;
}

int main(void){
    cout << sol(3) << endl;
    cout << sol(14) << endl;
    cout << sol(12) << endl;
    cout << sol(37) << endl;
    
    return 0;
}