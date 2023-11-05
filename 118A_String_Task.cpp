#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;
    string res;
    for(auto i : input){
        if(i != 'a' && i != 'A' && i != 'e' && i != 'E' && i != 'i' && i != 'I' && i != 'o' && i != 'O' && i != 'u' && i != 'U' && i!='y' && i!='Y'){
            res += '.' + string(1, tolower(i));
        }
    }
    // for(auto i:input){
    //     if(i>='A' && i<='Z'){
    //         i+='a'-'A';
    //     }
    //     if(i!='a' && i!='e' && i!='i' && i!='o' && i!='u' && i!='y'){
    //         res.append(1,'.');
    //         res.append(1,i);
    //     }
    // }
    cout << res << endl;
    return 0;
}
