#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    for(int i=0;i<=s.size();i++){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            i=-1;
        }
    }
    if(s.size() == 0){
        cout<<"Empty String"<<endl;
    }
    else{
        cout<<s;
    }
    return 0;
}

