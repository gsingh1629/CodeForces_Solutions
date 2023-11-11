#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int total=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        total+=temp;
    }
    cout<<static_cast<double>(total)/static_cast<double>(n)<<endl;
    return 0;
}