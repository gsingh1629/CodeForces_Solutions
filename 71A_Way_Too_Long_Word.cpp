#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nWords;
    cin>>nWords;
    while(nWords--){
        string aWord;
        cin>>aWord;
        if(aWord.size()>10){
            cout<<aWord[0]<<aWord.size()-2<<aWord[aWord.size()-1]<<endl;
        }
        else{
            cout<<aWord<<endl;
        }
    }
    return 0;
}