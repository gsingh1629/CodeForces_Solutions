#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    set<char> st;
    int i=0;
    while(s[i]){
        if(isalpha(s[i])){
            st.insert(s[i]);
        }
        i++;
    }
    cout<<st.size()<<endl;
    return 0;
}