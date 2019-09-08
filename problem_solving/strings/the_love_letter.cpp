#include <bits/stdc++.h>

using namespace std;



int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        int len = s.length();
        int h=len-1;
        int count=0;
        for(int i=0;i<len/2;i++){
            if(s[i]!=s[h-i]){
                int temp=abs((int)s[h-i]-(int)s[i]);
                count = count + temp;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}

