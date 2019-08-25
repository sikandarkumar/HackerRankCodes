#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--){
        long long int b,w;
        cin>>b>>w;
        long long int bc,wc,z;
        cin>>bc>>wc>>z;

        long long int total;
        if(z>bc && z>wc){
            total = b*bc+w*wc;
        }
        else if(bc>wc+z){
            total = b*(wc+z)+w*wc;
        }
        else if(wc>bc+z){
            total = b*bc+w*(bc+z);
        }
        else{
             total=b*bc+w*wc;
        }
        cout<<total<<endl;
    }
    return 0;
}

