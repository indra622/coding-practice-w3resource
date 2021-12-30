#include<iostream>

using namespace std;

string sol(string s){

    string chunk = s.substr(0,3);

    return chunk+s+chunk;
}

int main(void){
    
    cout << sol("Python") << endl;
    cout << sol("JS") << endl;
    cout << sol("Code")<< endl;
    
    return 0;
}