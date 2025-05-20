#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>v){
    vector<int>a(v.size());
    for(int i=0;i<v.size();i++){
        
            a[i]=v[v.size()-i-1];
        
    }
    return a;
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
    vector<int>rv=reverse(v);
    for(int i=0;i<rv.size();i++){
        cout<<rv[i]<<" ";
    }

}