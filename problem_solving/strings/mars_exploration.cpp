#include <bits/stdc++.h>

using namespace std;



int main()
{
    string s;
    cin>>s;

    int len = s.length();
    int nos = len/3;

    string sos="SOS";
    string temp=sos;
    for(int i=0;i<nos;i++){
        sos = sos + temp;
    }
    int count = 0;
    for(int j=0;j<len;j++){
            if(s[j]!=sos[j])
                count++;
    }
    cout<<count;
    return 0;
}

