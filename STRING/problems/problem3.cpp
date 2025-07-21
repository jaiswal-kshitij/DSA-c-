/*input a string of even length and return th second half of the string */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the string length"<<endl;
    cin>>n;
    string s="";
    if(n%2==0){
        int count=0;
       while(count<n){
         char x;
        cout<<"enter the character:";
        cin>>x;
        s+=x;
        count++;
       }
    }
    else{
        cout<<"enter a string of even length";
    }
    cout<<s.substr(n/2);
    return 0;
}