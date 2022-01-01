#include<iostream>

using namespace std;

int sol(int a, int b){

    if ((a<20 || a>30) && (b<20 || b>30)){
        return 0;
    }

    return max(a,b);
}

int main(void){
    cout << sol(78,95) << endl;
    cout << sol(20,30) << endl;
    cout << sol(21,25) << endl;
    cout << sol(28,28) << endl;

    return 0;
}