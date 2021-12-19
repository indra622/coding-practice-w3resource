#include<iostream>

using namespace std;


int abs(int a){
    return a<51 ? 51-a : (a-51)*3;
}

int main(void){

    cout << abs(53) << endl;
    cout << abs(30) << endl;
    cout << abs(51) << endl;

    return 0;
}