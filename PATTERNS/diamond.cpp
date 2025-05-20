#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";}
        for(int j=1;j<=count;j++){
            cout<<"*";
        }
        cout<<endl;
        count+=2;

        
    }
    for(int i=1;i<=n;i++){
        for(int s=0;s<i-1;s++){
            cout<<" ";
        }
        for(int j=1;j<=2*n-2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}