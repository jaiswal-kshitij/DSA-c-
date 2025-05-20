// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
      int height;
    cout<<"enter the height"<<endl;
    cin>>height;
    for(int i=1;i<=height;i++){
        for(int j=height+1-i;j>0;j--){
            cout<<"*";
        }
        // for(int k=i-1;k<height;k++){
        //     cout<<" ";
        // }
        
        cout<<endl;
    } 

    return 0;
}