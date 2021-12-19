#include<iostream>

using namespace std;

string sol(string s){
    
    unsigned int len = s.length();

    if(len<=0){
        return "error";
    }

    if (len > 1){
        return s.substr(len-1, 1) + s.substr(1, len-2) + s.substr(0, 1);
    }

    return s;

}

int main(void){
    
    cout << sol("abcd") << endl;
    cout << sol("a") << endl;
    cout << sol("xy") << endl;
    
    return 0;
}