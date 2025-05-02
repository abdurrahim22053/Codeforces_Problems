#include<bits/stdc++.h>
using namespace std;
int main (){
    while(1){
    int n;
    cout<<"Enter your number : "<<endl;
    cin>>n;
    for( int i=1;i<=10;i++){
         cout<<n<<"X"<<i <<"="<<i*n;
         cout<<endl;
    }
}
    return 0;
}