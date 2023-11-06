#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int upper=0,lower=0;
    for(auto c:s){
        if(isupper(c)){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper>lower){
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}