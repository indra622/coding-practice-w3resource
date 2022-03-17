#include<iostream>
#include<string>

using namespace std;

int sol(string str1, string str2){

    int count=0;

    for(int i = 0; i<str1.length()-1;i++){
        string key = str1.substr(i,2);
        //cout << "key:" << key << endl;

        for(int j = 0; j<str2.length()-1;j++){
            string value = str2.substr(j,2);
            //cout << "value:" << value << endl;

            if(key==value){
                count++;
            }
        }

    }

    return count;
}

int main(void){

    cout << sol("abcdefgh", "abijsklm") << endl;
    cout << sol("abcde", "osuefrcd") << endl;
    cout << sol("pqrstuvwx", "pqkdiewx") << endl;

    return 0;
}