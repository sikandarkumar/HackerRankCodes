#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=1;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i]))
            ans++;
    }
    cout<<ans;
    return 0;
}

