/*input a string of length greater than 5 and reverse the element from 2nd position to 5th position using inbuilt function*/


#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"enter the no. of elements in the string:";
    cin>>n;
    if(n<=5){
        cout<< "Please enter a number greater than 5." << endl;

    }
    else{
        int count=1;
        string s="";
        while(count<=n){
            char x;
            cout<<"enter the "<<count<<" character:";
            cin>>x;
            s+=x;
            count++;   
        }
        reverse(s.begin()+1,s.begin()+5);
        cout<<"customised string: "<<s;
    }
    
    return 0;
}