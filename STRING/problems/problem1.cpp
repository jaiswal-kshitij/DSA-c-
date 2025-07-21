//input the string of even length and reverse the first half of the string
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of elements in the string:";
    cin>>n;
    if(n%2==0){
        string s="";
        for(int i=0;i<n;i++){
            char c;
            cout<<"enter the "<<i+1<<" character:";
            cin>>c;
            s+=c;
        }
        reverse(s.begin(), s.begin()+n/2);
        cout << "Modified string: " << s << endl;

    }
    else{
        cout<<"please enter a string of even length";
    }

}