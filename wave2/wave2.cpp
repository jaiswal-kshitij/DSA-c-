#include<iostream>
using namespace std;
int main(){
    int row,col;
cout<<"enter the no. of rows"<<endl;
cin>>row;
cout<<"enter the no. of col"<<endl;
cin>>col;

int arr[row][col];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
    cout<<endl;
}

for(int i=0;i<col;i++){
    if(i%2==0){
    for(int j=0;j<row;j++){
        cout<<arr[i][j]<<" ";

    }
    }
    else{
        for(int j=row-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
    }
}

    
}