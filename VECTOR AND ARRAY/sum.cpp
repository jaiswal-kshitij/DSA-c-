#include<iostream>
#include<vector>
using namespace std;
class identification{
    public:
    void sum(vector<int>v,int x){
        for(int i=0;i<v.size()-1;i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]+v[j]==x){
                    cout<<"("<<i<<","<<j<<")";
                    cout<<endl;
                }
            }

        }
    }
};
int main(){
    identification i;
    vector<int>v;
    int n;
    cout<<"enter the length:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the elemnt:"<<i<<endl;
        cin>>x;
        v.push_back(x);

    }

    i.sum(v,4);

}