#include <bits/stdc++.h>

using namespace std;


int main()
{
    int s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    //apple falls
    int apples=0;
    int oranges=0;
    for(int i=0;i<m;i++){
        int temp1;
        cin>>temp1;
        if(a+temp1>=s&&a+temp1<=t){
            apples++;
        }
    }
    for(int j=0;j<n;j++){
        int temp2;
        cin>>temp2;
        if(b+temp2>=s&&b+temp2<=t){
            oranges++;
        }
    }
    cout<<apples<<endl;
    cout<<oranges<<endl;    
    return 0;
}

