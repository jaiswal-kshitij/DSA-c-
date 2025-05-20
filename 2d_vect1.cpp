#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>vect;
int main(){
vector<int>v1;
vector<int>v2;
vector<int>v3;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
v2.push_back(4);
v2.push_back(5);
v2.push_back(7);
v2.push_back(8);
v3.push_back(99);
v3.push_back(100);

vect.push_back(v1);
vect.push_back(v2);
vect.push_back(v3);
}