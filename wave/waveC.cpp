#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the no. of rows"<<endl;
    cin>>m;
    cout<<"enter the no. of columns"<<endl;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"enter the element:"<<"("<<i<<","<<j<<")"<<endl;
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
        else{
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}