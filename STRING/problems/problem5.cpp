/*given a string consisting of lowercase english alphabets.print the character that occuring most no. of times */
#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout<<"enter the string: "<<endl;
    getline(cin,s);
    
    int max=0;
    char letter;
    for(int i=0;i<s.length()-1;i++){
        int count=1;
        
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
               count++;
            }
        }
        if(max<count){
            max=count;
            letter=s[i];

        }

    }
    cout<<"character: "<<letter <<" occurs: "<<max<<endl;
    
    return 0;
}