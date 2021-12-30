#include<iostream>

using namespace std;

bool sol(int a, int b){
    bool x = a>=40 && a<=50 && b>=40 && b<=50;
    bool y = a>=50 && a<=60 && b>=50 && b<=60;

    return x||y;
}

int main(void){
    cout << sol(78,95) << endl;
    cout << sol(25,35) << endl;
    cout << sol(40,50) << endl;
    cout << sol(55,60) << endl;
    
    return 0;
}