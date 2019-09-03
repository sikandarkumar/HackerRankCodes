#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        int n = s.length();
        string r = "";
        for (int k = n-1; k >= 0; k--){
            r = r+s[k];
        } 
        vector <int> s_vec;
        vector <int> r_vec;
        for(int i=0;i<n-1;i++){
            s_vec.push_back(abs(s[i]-s[i+1]));
        }
        for(int j=0;j<n-1;j++){
            r_vec.push_back(abs(r[j]-r[j+1]));
        }
        (s_vec == r_vec)?  cout << "Funny\n" : cout << "Not Funny\n";
    }
    return 0;
}

