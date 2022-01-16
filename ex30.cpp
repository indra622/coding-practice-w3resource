#include<iostream>

using namespace std;

int sol(string s){
    
    string ptn(s.substr(s.length() - 2));
    unsigned int count = 0;

    for (int i = 0; i< s.length()-2; i++){
        if(s.substr(i, 2) == ptn){
            count++;
        }
    }

    return count;
}

int main(void){
    cout << sol("abcdsab") << endl;
    cout << sol("abcdabab") << endl;
    cout << sol("abcabdabab") << endl;
    cout << sol("abcabd") << endl;

    return 0;
}