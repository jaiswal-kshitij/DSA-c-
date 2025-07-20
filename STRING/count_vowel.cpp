#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
    string str1;
    getline(cin,str1);
    int count=0;
    int i=0;
    while(str1[i]!='\0'){
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' ||
           str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U') {
            count++;
        }
        i++;
    }
    cout << "Number of vowels in the string: " << count << endl;
    
    return 0;
}