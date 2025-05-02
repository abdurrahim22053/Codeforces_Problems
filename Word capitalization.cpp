
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char ch=toupper(s[0]);
    cout<<ch;
    for( int i=1;i<s.size();i++){
        cout<<s[i];
    }
return 0;
}
