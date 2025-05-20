#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows  ";
    cin>>n;
    cout<<"Enter the number of columns  ";
    cin>>m;
    int a[n][m];
    cout<<"Enter the elements of the matrix: ";
    int tne=n*m;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        { 
            cout<<"Enter the element a["<<i<<"]["<<j<<"] ";
            cin>>a[i][j];
        }
        cout<<endl;
    }

    int min_r=0,min_c=0,max_r=n-1,max_c=m-1;
    while(min_r<=max_r && min_c<=max_c)
    {
    //moving right
    for(int j=min_c;j<=max_c && count<tne;j++)
    {
        cout<<a[min_r][j]<<" ";
        count++;
    }
    
    min_r++;

    //moving down
for(int i=min_r;i<=max_r && count<tne;i++){
    cout<<a[i][max_c]<<" ";
    count++;
    }

max_c--;

//moving left
for(int j=max_c;j>=min_c && count<tne;j--){
    cout<<a[max_r][j]<<" ";
    count++;
}

max_r--;
//moving up
for(int i=max_r;i>=min_r && count<tne;i--){
    cout<<a[i][min_c]<<" ";
    count++;
}

min_c++;
    return 0;
}}