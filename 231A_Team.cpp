#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numProblems;
    cin>>numProblems;
    int aWriteSolution=0;
    while(numProblems--){
        int aCount=0;
        for(int i=0;i<3;i++){
            int aSure;
            cin>>aSure;
            aCount+=aSure;
        }
        aWriteSolution+=(aCount>=2)?1:0;
    }
    cout<<aWriteSolution<<endl;
    return 0;
}