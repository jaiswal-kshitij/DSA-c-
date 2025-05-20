#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    int ce=arr[i];
    int count=0;
    if(ce!=INT_MAX){
    for(int j=0;j<n;j++){
      if(arr[j]==ce){
        count++;
        arr[j]=INT_MAX;
      }
    }
      
    }
    cout<<ce<<"-->"<<count<<endl;
  }
}
