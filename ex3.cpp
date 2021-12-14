#include<iostream>

using namespace std;

bool sol(int a, int b){
    if(a==30 || b==30){
        return true;
    }
    if(a+b==30){
        return true;
    }

    return false;
}

int main(void){
    
    cout << sol(30, 0) << endl;
    cout << sol(25, 5) << endl;
    cout << sol(20, 30) << endl;
    cout << sol(20, 25) << endl;
    
    return 0;
}