#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> a;
    int n, m;
    cout << "Enter the number of rows  ";
    cin >> n;
    cout << "Enter the number of columns  ";
    cin >> m;
     int num = 5;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
       
        for (int j = 0; j < n; j++)
        {
            temp.push_back(num);
            num=num+5;
        }
        a.push_back(temp);
    }
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
            
    }
    

}