#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main()
{
    int n;
    cin>>n;
    vector <int> p;

    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        p.push_back(temp);
    }

    for(int x=1;x<=n;x++){
        vector<int>::iterator it;
        vector<int>::iterator it2;
        it = std::find (p.begin(), p.end(), x);
        int pos=it - p.begin() + 1;
        it2 = std::find (p.begin(), p.end(), pos);
        int ans = it2 - p.begin() + 1;
        cout<<ans<<endl;
    }
    return 0;
}

