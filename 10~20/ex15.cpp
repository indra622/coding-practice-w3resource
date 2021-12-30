#include<iostream>

using namespace std;

bool sol(int a, int b, int c ){
    return (a>=20 && a<=50) || (b>=20 && b<=50) || (c>=20 && c<=50);
}

int main(void){
    cout << sol(11, 20, 12) << endl;
    cout << sol(30, 30, 17) << endl;
    cout << sol(25, 35, 50) << endl;
    cout << sol(15, 12, 8) << endl;

    return 0;
}