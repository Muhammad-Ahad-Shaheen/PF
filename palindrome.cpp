#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    int  value= 0;
    
    cout << "\tEnter a string: "; cin >> string1;
    
    length = strlen(string1);
    
    for(i=0; i<length; i++){
        if(string1[i] != string1[length-i-1]){
            value = 1;
            break;
           }
        }
    
    if (value==1) {
        cout <<"\t"<< string1 << " is not a palindrome" << endl; 
    }    
    else {
        cout <<"\t"<< string1 << " is a palindrome" << endl; 
    }
    
    return 0;
}

