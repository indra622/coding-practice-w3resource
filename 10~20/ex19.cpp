#include<iostream>

using namespace std;

int sol(int a, int b){
    if (a==b){
        return 0;
    }

    return abs(100-a) >abs(100-b)? b:a;
}

int main(void){

    cout << sol(78,95) << endl;
    cout << sol(95, 95) << endl;
    cout << sol(99, 70) << endl;

    return 0;
}