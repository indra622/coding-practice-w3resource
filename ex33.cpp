#include<iostream>
#include<algorithm>

using namespace std;

string sol(string s, char key){
    
    
    for(int i = 1; i<s.length()-1; i++){
        if(s[i]==key){
            s = s.erase(i, 1);
        }
    }

    return s;

    

}



int main(void){

    cout << sol("XxxXxX", 'X') << endl;
    cout << sol("abxdddca", 'a') << endl;
    cout << sol("xabjbhtrb", 'b') << endl;

    return 0;

}