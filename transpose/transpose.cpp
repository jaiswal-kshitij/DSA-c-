#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter the no. of rows :"<<endl;
    cin>>row;
    int colm;
    cout<<"enter the no. of columns:"<<endl;
    cin>>colm;
    int arr[row][colm];
    for(int i=0;i<row;i++){
        for(int j=0;j<colm;j++){
            cout<<"enter the element:"<<"("<<i<<","<<j<<")"<<endl;
            cin>>arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

for(int i=0;i<row;i++){
        for(int j=0;j<colm;j++){
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

cout<<endl;
cout<<"TRANSPOSE OF A MATRIX"<<endl;


for(int i=0;i<colm;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i];
            cout<<" ";
        }
        cout<<endl;
    }

}
