#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    for(int i=0;i<4;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<3;i++){
        cout<<nums[3]-nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}