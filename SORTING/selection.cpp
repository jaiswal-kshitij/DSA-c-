#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min_idx=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        int temp= arr[min_idx];
    arr[min_idx]=arr[i];
    arr[i]=temp;
    }
}
int main(){
    int n;
    cout<<"enter the length"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element"<<i<<endl;
        cin>>arr[i];
    }
    cout<<"unsorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"sorted array"<<endl;
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }