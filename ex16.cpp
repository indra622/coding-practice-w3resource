#include<iostream>

using namespace std;

bool sol(int a, int b){

    return ((a < 20) || (b > 50)) || ((a>50) || (b<20));
}

int main(void){

    cout << sol(20, 84) << endl;
    cout << sol(14, 50) << endl;
    cout << sol(11, 45) << endl;
    cout << sol(25, 40) << endl;
    
    return 0;
}