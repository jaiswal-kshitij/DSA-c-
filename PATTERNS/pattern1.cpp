// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

    


int main() {
  int height;
    cout<<"enter the height"<<endl;
    cin>>height;
    for(int i=1;i<=height;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }  
    

    return 0;
}