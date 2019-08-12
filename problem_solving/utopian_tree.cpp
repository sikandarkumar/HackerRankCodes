#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int temp =1;
        int n;
        cin>>n;
        for(int j=1;j<=n;j++){
            if(j%2==1){
                temp = temp*2;
            }
            else{
                temp = temp +1;
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}

