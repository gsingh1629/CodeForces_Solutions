#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0,curr=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        curr=curr-a+b;
        res=max(res,curr);
    }
    cout<<res<<endl;
    return 0;
}