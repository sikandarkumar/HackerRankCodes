#include <bits/stdc++.h>
using namespace std;


int main()
{
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        int count=0;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]==s[i+1]){
                //s.erase(s.begin() + (i+1));
                //len--;
                count++;
                //i=-1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

