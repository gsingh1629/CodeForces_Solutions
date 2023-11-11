#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> p;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        p.push_back(temp);
    }
    vector<int> res(n,0);
    for(int i=0;i<n;i++){
        res[p[i]-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}