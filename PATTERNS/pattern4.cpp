#include<iostream>
using namespace std;
int main(){

int height;
   cout<<"enter the height"<<endl;
   cin>>height;
   for(int i=1;i<=height;i++){
       for(int k=0;k<i-1;k++){
           cout<<" ";}
        for(int j=height+1-i;j>0;j--){
           cout<<"*";
       }  
       cout<<endl;
       }
}