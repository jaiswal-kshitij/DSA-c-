#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0){
            str[i]='a';
        }
    }
    cout<<"Modified string: "<<str<<endl;
    return 0;
}