#include <iostream>
using namespace std;

int main() {
   char str[]={'a','b','c','d','e'};
   cout<<str;
   cout<<endl;
   for(int i=0;i<5;i++){
    cout<<str[i]<<" ";
   }
   cout<<endl;


   char str1[] = "pqrst";
   for(int a=0;a<5;a++){
    cout<<str1[a]<<" ";
   }


   // traversal when size is not known
    cout<<endl;
    for(int k=0;str1[k]!='\0';k++){
        cout<<str1[k]<<" ";
    }
    cout<<endl;
    char str2[]={'x','y','z','\0','m','n'};
    cout<<str2<<endl;
}