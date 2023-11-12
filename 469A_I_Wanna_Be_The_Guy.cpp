#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    set<int> st;
    for(int i=0;i<p;i++){
        int a;
        cin>>a;
        st.insert(a);
    }
    cin>>p;
    for(int i=0;i<p;i++){
        int a;
        cin>>a;
        st.insert(a);
    }
    if(n==st.size()){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}