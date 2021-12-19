#include<iostream>

using namespace std;

bool sol(int a){
    int aa = abs(a);
    if(aa<=110 && aa>=90){
        return true;
    }
    if(aa<=210 && aa>=190){
        return true;
    }

    return false;
    
}

int main(void){
    
    cout << sol(103) << endl;
    cout << sol(90) << endl;
    cout << sol(89) << endl;
    
    return 0;
}