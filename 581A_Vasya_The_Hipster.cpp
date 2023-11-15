#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int pair=min(a,b);
    int diff=max(a,b)-pair;
    cout<<pair<<" "<<diff/2<<endl;
    return 0;
}