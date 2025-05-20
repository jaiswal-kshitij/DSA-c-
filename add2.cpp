#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the no. of rows:"<<endl;
    cin>>n;
    cout<<"enter the no. of columns:"<<endl;
    cin>>m;
    int arr1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
 int p,q;
    cout<<"enter the no. of rows:"<<endl;
    cin>>p;
    cout<<"enter the no. of columns:"<<endl;
    cin>>q;
    int arr2[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    if(n==p && m==q){
        cout<<"matrices can be added"<<endl;
        int arr3[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"matrices can't be added"<<endl;
    }
    


}