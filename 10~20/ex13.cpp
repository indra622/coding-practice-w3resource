#include<iostream>

using namespace std;

bool sol(int a, int b){
    bool con1 = (a<0 || a>100);
    bool con2 = (b<0 || b>100);

    return con1 && con2;
}

int main(void){
    cout << sol(120, -1) << endl;
    cout << sol(-1, 120) << endl;
    cout << sol(2, 120) << endl;
    
    return 0;
}