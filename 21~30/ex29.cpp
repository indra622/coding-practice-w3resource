#include<iostream>

using namespace std;

string sol(string s){
    string tmp = "";
    string tmp2 = "";
    
    for (int i = 0; i< s.length();i++){
        tmp2 += s[i];
        tmp += tmp2;
    }

    return tmp;

}


int main(void){

    cout << sol("abcd") << endl;
    cout << sol("abc") << endl;
    cout << sol("a") << endl;
    
    return 0;
}