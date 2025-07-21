#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"enter the string: ";
    getline(cin,str);
    vector<int>lexo(26,0);
    int max=0;
    char let;
    for(int i=0;i<str.length();i++){
        int idx=int(str[i])-97;
        lexo[idx]++;

        if(max<lexo[idx]){
            max=lexo[idx];
            let=char(idx+97);
        }

    }
    cout<<"character: "<<let<<" occurs: "<<max<<" times";
    

    return 0;
}