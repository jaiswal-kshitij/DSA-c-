#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    cout<<"length of the string is:"<<str.length()<<endl;
    cout<<"size of the string is:"<<str.size()<<endl;
    cout<<"capacity of the string is:"<<str.capacity()<<endl;

    //push_back and pop_back
    str.push_back('!');
    cout<<"After push_back: "<<str<<endl;
    str.pop_back();
    cout<<"After pop_back: "<<str<<endl;

    //concatenation
    string word1="hello";
    string word2="world";
    string word3=word1+" "+word2;
    cout<<"Concatenated string: "<<word3<<endl;

    //reverse a string 
    reverse(str.begin(),str.end());
    cout<<"Reversed string: "<<str<<endl;
    
    
    //reversing a substring
    reverse(str.begin()+2, str.end()-2);
    cout<<"Reversed substring: "<<str<<endl;

    return 0;
}