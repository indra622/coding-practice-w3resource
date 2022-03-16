#include<iostream>

using namespace std;


bool sol(int arr[], int length){
    
    if (length<3){
        printf("too short");
        return 1;
    }

    for(int i=2;i<length;i++){
        if(arr[i-2] == 1 && arr[i-1] == 2 && arr[i] == 3){
            return true;
        }
    }

    return false;
}



int main(void){
    int arr[] = {1,1,2,3,1};
    int arr2[] = {1,1,2,4,1};
    int arr3[] = {1,1,2,1,2,3};
    int len1 = sizeof(arr) / sizeof(arr[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int len3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << sol(arr, len1) << endl;
    cout << sol(arr2, len2) << endl;
    cout << sol(arr3, len3) << endl;
    return 0;
}