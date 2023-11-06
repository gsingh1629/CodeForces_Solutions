#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int res=0;
    vector<int> nums={5,4,3,2,1};
    for(int i=0;i<5;i++){
        res+=x/nums[i];
        x=x%nums[i];
    }
    cout<<res<<endl;
    return 0;
}