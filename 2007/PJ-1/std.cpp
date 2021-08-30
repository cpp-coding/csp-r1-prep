#include<bits/stdc++.h>
using namespace std;
#define loop str.length()
void reverse(string str){
    for (int i = loop-1; i >= 0; i--) {
        cout<<str[i];
    }
}
int main(){
    string str;
    int t;
    while(1){
        cin>>str;
        if(str=="-1")return 0;
        // cin>>str;
        reverse(str);
    }
}