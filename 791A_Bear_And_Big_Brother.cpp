#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int res=0;
    if(a<=b){
        while(a<=b){
            a=a*3;
            b=b*2;
            res++;
        }
    }
    cout<<res<<endl;
    return 0;
}