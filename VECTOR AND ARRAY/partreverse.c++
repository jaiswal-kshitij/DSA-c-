#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>&v,int i,int j){
  
  while(!(i>=j)){
  int temp=v[i];
  v[i]=v[j];
  v[j]=temp;
  i++;
  j--;}
  return v;
}
int main(){
    int n;
    cout<<"enter the length:"<<endl;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the element:"<<endl;
        cin>>x;
        v.push_back(x);

    }
    cout<<endl;
    cout<<"array before reversal:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"reversed array:"<<endl;
    vector<int>rv=reverse(v,1,4);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

  

}