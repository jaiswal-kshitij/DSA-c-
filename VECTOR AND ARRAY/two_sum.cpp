#include<iostream>
#include<vector>
using namespace std;
vector<int> create_vector(int n){
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter element: "<<i<<endl;
        cin>>x;
        a.push_back(x);

    }
    return a;

}
void two_sum(vector<int>v,int x){
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){

            if(v[i]+v[j]==x){
                cout<<"( "<<i<<" , "<<j<<" )"<<endl;
            }
        }
    }
}
int main(){
    vector<int>a;
    a=create_vector(5);
two_sum(a,4);


    
}