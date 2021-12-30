#include<iostream>

using namespace std;

int sol(int a, int b, int c){
    return max(a, max(b, c));
}

int main(void){
    cout << sol(1,2,3) << endl;
    cout << sol(1,3,2) << endl;
    cout << sol(1, 1, 1) << endl;
    cout << sol(1,2,2) << endl;

    return 0;
}