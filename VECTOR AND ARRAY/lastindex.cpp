#include<iostream>
#include<vector>
using namespace std;

int last_index(vector<int>v,int x){
    int indx=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            indx=i;
            break;
        }
    }
    return indx;
}
int index_last(vector<int>v,int x){
    int indx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            indx=i;
            
        }
    }
    return indx;

}
int main(){
    vector<int>v;
v.push_back(2);
v.push_back(3);
v.push_back(1);
v.push_back(3); 
v.push_back(4);
v.push_back(2);
v.push_back(3);
v.push_back(6);
cout<<last_index(v,3);
cout<<endl;
cout<<index_last(v,2);}
