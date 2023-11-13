#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0;
    vector<int> nums={100,20,10,5,1};
    for(int i=0;i<5;i++){
        res+=n/nums[i];
        n=n%nums[i];
    }
    cout<<res<<endl;
    return 0;
}