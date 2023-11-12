#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }
        int d=a/b;
        int n=(d+1)*b;
        cout<<n-a<<endl;
    }
    return 0;
}