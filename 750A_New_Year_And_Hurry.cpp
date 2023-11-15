#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int time=240,needed=0,ans=0;
    time-=k;
    for(int i=1;i<=n;i++){
        needed+=i*5;
        if(needed<=time){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}