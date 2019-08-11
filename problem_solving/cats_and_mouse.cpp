#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;



int main()
{
    int q,a,b,c;
    cin>>q;

    for(int i=0;i<q;i++){
        cin>>a>>b>>c;

        if(abs(a-c)==abs(b-c)){
            cout<<"Mouse C"<<endl;
        }
        else if(abs(a-c)<abs(b-c)){
            cout<<"Cat A"<<endl;
        }
        else{
            cout<<"Cat B"<<endl;
        }
    }

    return 0;
}
