#include <bits/stdc++.h>
#include<vector>
using namespace std;


int main()
{
    int n,q;
    cin>>n;
    vector<string> s;
    vector<string> qu;
    for(int i=0;i<n;i++){
        string tmp1;
        cin>>tmp1;
        s.push_back(tmp1);
    }
    cin>>q;
    for(int j=0;j<q;j++){
        string tmp2;
        cin>>tmp2;
        qu.push_back(tmp2);
    }
    for(int k=0;k<qu.size();k++){
        string check;
        check = qu[k];
        int count = std::count (s.begin(), s.end(), check);
        cout<<count<<endl;
    }

    return 0;
}

