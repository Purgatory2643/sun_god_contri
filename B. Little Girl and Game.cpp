#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    map<char,int> m;
    int n=s.size();
    for(int i=0;i<n;i++)
        m[s[i]]++;
    int count=0;
    for(auto i:m)
    {
        if(i.second%2!=0)
            count++;
    }
    if(count%2==0 && count!=0)
        cout<<"Second"<<endl;
    else
        cout<<"First"<<endl;
}
