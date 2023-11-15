#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int value=0 ;
	long long priceMade=0;
    bool flag=1;
    while(flag){
        if((priceMade%10==0&&priceMade!=0)||priceMade%10==r){
            break;
        }
        ++value;
        priceMade+=k;
    }
    cout<<value<<endl;
    return 0;
}