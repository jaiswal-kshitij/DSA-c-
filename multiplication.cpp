
#include <iostream>
using namespace std;

int main() {
    int n,m,p,q;
cout<<"enter the no. of rows for martix1:"<<endl;
cin>>n;
cout<<"enter the no. of columns for matrix1"<<endl;
cin>>m;
cout<<"enter the no. of rows for matrix2"<<endl;
cin>>p;
cout<<"enter the no. of columns for matrix2"<<endl;
cin>>q;
int arr1[n][m];
int arr2[p][q];
if(m==p){
int arr3[n][q];
cout<<"enter the elements for matrix1"<<endl;
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter the element "<<"("<<i<<","<<j<<")"<<endl;
            cin>>arr1[i][j];
        }
        cout<<endl;
    }
cout<<"enter the elements for matrix2"<<endl;
   for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<"enter the element "<<"("<<i<<","<<j<<")"<<endl;
            cin>>arr2[i][j];
        }
        cout<<endl;
    }
cout<<"MATRIX 1"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
cout<<"MATRIX 2"<<endl;
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<q;j++){
        arr3[i][j]=0;
        for(int k=0;k<p;k++){
            arr3[i][j]+=arr1[i][k]*arr2[k][j];
        }
    }
    cout<<endl;
}
cout<<endl;
cout<<" RESULTANT MATRIX:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<q;j++){
        cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
}


}
else{
    cout<<"MATRIX CANNOT BE MULTIPLIED:"<<endl;

}
    return 0;
}