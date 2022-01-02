#include<iostream>

using namespace std;

int sol(string s){
    string ref="aa";
    int cnt = 0;

    for(int i = 0; i<s.length()-1;i++){
        if(s.substr(i, 2) == ref){
            cnt+=1;
        }
    }
    return cnt;
}

int main(void){
    cout << sol("bbaaccaag") << endl;
    cout << sol("jjkiaaasew") << endl;
    cout << sol("JSaaakoiaa") << endl;

    return 0;
}