#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string target="hello";
    int k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==target[k]){
            k++;
        }
    }
    if(k==target.size()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}