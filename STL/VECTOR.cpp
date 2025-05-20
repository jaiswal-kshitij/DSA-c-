#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }   
    cout<<"size of vector is:"<<v.size()<<endl;
    cout<<"capacity of vector is:"<<v.capacity()<<endl;
    cout<<"element at position index 2 of vector is:"<<v.at(2)<<"or"<<v[2]<<endl;
    cout<<"element at the front of vector is:"<<v.front()<<endl;
    cout<<"element at the back of vector is:"<<v.back()<<endl;
    cout<<"address first element of vector is:"<<v.data()<<endl;
    cout<<"address of vector is:"<<&v<<endl;
    cout<<"address of first element of vector is:"<<&v[0]<<endl;
    for(int i:v){
        cout<<i<< " ";
    }
    cout<<endl;
    cout<<"pop the last element of vector"<<endl;
    cout<<endl;
    v.pop_back();
    cout<<endl;
    for(int i:v){
        cout<<i<< " ";
    }
    v.emplace_back(6);
    cout<<endl;
    for(int i:v){
        cout<<i<< " ";
    }
    cout<<endl;
    //erase
    cout<<"erase the element 0 from vector"<<endl;
    v.erase(v.begin());
    cout<<"erase the element 1 from vector"<<endl;
    v.erase(v.begin()+1);
    cout<<"erase the elements from 2 till 4 vector"<<endl;
    v.erase(v.begin()+2,v.begin()+4);
    cout<<endl;
    for(int i:v){
        cout<<i<< " ";
    }
    cout<<endl;
    //insert
    cout<<"insert the element 0 at position 0 of vector"<<endl;
    v.insert(v.begin(),0);
    cout<<"insert the element 1 at position 1 of vector"<<endl; 
    v.insert(v.begin()+1,1);
    cout<<"insert the element 2 at position 2 of vector"<<endl; 
    v.insert(v.begin()+2,2);
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    //sort
    cout<<"sort the vector"<<endl;
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    //reverse   
    cout<<"reverse the vector"<<endl;
    reverse(v.begin(),v.end()); 
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    // iterator
              vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    vector<int>::reverse_iterator rit;
    for(rit=v.rbegin();rit!=v.rend();rit++){
        cout<<*(rit)<<" ";
    }
    cout<<endl;
    //empty
    cout<<"is vector empty?"<<endl;
    if(v.empty()){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    //clear
    cout<<"clear the vector"<<endl;
    v.clear();  
    cout<<"is vector empty?"<<endl;
    if(v.empty()){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
 
    

}