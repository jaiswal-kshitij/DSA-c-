#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    cout<<"You entered: "<<str<<endl;

    //another of taking input
    string str1;
    cin>>str1;// this will take input until space
    cout<<"you enterd:"<<str1<<endl;

    return 0;
}