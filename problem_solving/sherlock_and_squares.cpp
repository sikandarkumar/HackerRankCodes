#include <bits/stdc++.h>

using namespace std;


int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        int count=0;
        int x=1;
        while(x*x<a)x++;
        while(x*x<=b){
            count++;
            x++;
            }
        cout<<count<<endl;
    }

    return 0;
}

