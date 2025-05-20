#include<iostream>
#include<vector>
using namespace std;
vector<int> create_vector(int n){
vector<int> v;
for(int i=0;i<n;i++){
    int x;
    cout<<"enter element: "<<i<<endl;
    cin>>x;
    v.push_back(x);}
    return v;}

void display_vector(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}

int main(){
    int n;
cout<<"enter maximum size:"<<endl;
cin>>n;
vector<int>a=create_vector(n);
display_vector(a);
}
