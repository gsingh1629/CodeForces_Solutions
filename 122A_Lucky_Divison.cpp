#include<bits/stdc++.h>
using namespace std;
bool isLucky(int n){
    while(n){
        if(n%10!=4 && n%10!=7){
            return false;
        }
        n=n/10;
    }
    return true;
}
bool isAlmostLucky(int n){
    if(isLucky(n)){
        return true;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0 && (isLucky(i) || isLucky(n/i))){
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(isAlmostLucky(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}