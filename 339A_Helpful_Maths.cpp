#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    int one=0,two=0,three=0;
    for(auto c:input){
        if(c=='1'){
            one++;
        }
        else if(c=='2'){
            two++;
        }
        else if(c=='3'){
            three++;
        }
    }
    string res;
    for(int i=0;i<one;i++){
        res+="1+";
    }
    for(int i=0;i<two;i++){
        res+="2+";
    }
    for(int i=0;i<three;i++){
        res+="3+";
    }
    res=res.substr(0,res.size()-1);
    cout<<res<<endl;
    return 0;
}