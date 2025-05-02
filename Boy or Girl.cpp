#include<iostream>
#include<string>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        for( int j=0; j<s.size(); j++)
        {
            if(s[j]!=s[j+1])
                count++;
        }
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else if(count%2!=0)
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
