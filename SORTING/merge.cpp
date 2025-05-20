#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>v,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(v[left]<=v[right]){
            v.push_back(v[left]);
            left++;
        }
        else{
            v.push_back(v[right]);
            right++;
        }

    }
while(left<=mid){
   v.push_back(v[left]);
            left++; 
}

while(right<=high){
    v.push_back(v[right]);
            right++;

}
for(int i=low;i<=high;i++){
    v[i]=temp[i-low];
    
}


}
void ms(vector<int>arr,int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int>arr;
    int n;
    cout<<"enter the length:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the element:"<<endl;
        cin>>x;
        arr.push_back(x);
    }
    cout<<endl;
    cout<<"unsorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    ms(arr,0,n-1);
    cout<<"sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}