#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of rows/columns :"<<endl;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"enter the element:"<<"("<<i<<","<<j<<")"<<endl;
            cin>>arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    cout<<"TRANSPOSE OF MATRIX"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    }