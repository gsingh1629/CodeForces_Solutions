#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=false;
    while(n--){
        int temp;
        cin>>temp;
        if(temp==1){
            flag=true;
        }
    }
    if(flag){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;
}