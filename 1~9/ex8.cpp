#include<iostream>

using namespace std;

string sol(string s){
    if(s.length() < 2){
        return s;
    }

    string chunk = s.substr(0, 2);


    return chunk+chunk+chunk+chunk;
}

int main(void){
    
    cout << sol("C Sharp") << endl;
    cout << sol("JS") << endl;
    cout << sol("a") << endl;
    
    return 0;
}

//"C Sharp"
//"JS"
//"a"