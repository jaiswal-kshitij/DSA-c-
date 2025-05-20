#include<iostream>
#include<vector>
using namespace std;
// function starting from last index 
int last_index(vector<int>a,int x){
    int idx=-1;
    int i;
    for( i=a.size()-1;i>=0;i--){
        if(a[i]==x){
        idx=i;
        break;}
    }
    return idx;
    
}
// function starting from first index
int find_index(vector<int>a,int y){
    int idx=-1;
    int i;
    for(i=0;i<a.size();i++){
        if(a[i]==y){
            idx=i;
        }
    }
    return idx;
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
cout<<last_index(v,3)<<endl;
cout<<find_index(v,2);

}