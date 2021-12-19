#include<iostream>

using namespace std;

int add(int a, int b){
    return a==b ? (a+b)*3 : a+b;
}

int main(void){
    cout << add(1, 2) << endl;
    cout << add(3, 2) << endl;
    cout << add(2, 2) << endl;

    return 0;
}