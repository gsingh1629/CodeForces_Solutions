#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    unordered_map<char,int> mp;
    for(auto c:input){
        mp[c]++;
    }
    string res=(mp.size()%2==0)?"CHAT WITH HER!":"IGNORE HIM!";
    cout<<res<<endl;
    return 0;
}