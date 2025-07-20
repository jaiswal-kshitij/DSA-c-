#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout<<"enter a string ";
    getline(cin,s);
    cout<<s.substr(3)<<endl;// this will give substring from index 3 till end
    cout<<s.substr(2,5)<<endl;//this will give substring of length 5 starting from index 2
    

    
    return 0;
}