#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long res;
    if(n%2==0){
        res=n/2;
    }
    else{
        res=((n+1)/2)*(-1);
    }
    cout<<res<<endl;
    return 0;
}