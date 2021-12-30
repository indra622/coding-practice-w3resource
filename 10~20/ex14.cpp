#include<iostream>

using namespace std;

bool sol(int a, int b){


    return (a >=100 && a <=200 ) || (b >=100 && b <=200);
}

int main(void){
    cout << sol(100, 199) << endl;
    cout << sol(250, 300) << endl;
    cout << sol(105, 190) << endl;

    return 0;
}