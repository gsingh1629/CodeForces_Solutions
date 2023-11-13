#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(auto c:s){
        char temp=tolower(c);
        mp[temp]++;
    }
    if(mp.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}