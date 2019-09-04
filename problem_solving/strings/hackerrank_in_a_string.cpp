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
        string h="hackerrank";
        bool a =false;
        int ans=0;
        // for(int i=0;i<10;i++){
        //     size_t found = s.find(h[i],i);
        //     if(found)
        //         ans++;
        //     if (found != string::npos){
        //         found = s.find(h[i+1], found+1);
        //     }
        // }
        int len =s.length();
        int i=0;
        int pos=0;
        while(pos!=string::npos){
            int found = s.find(h[i],pos);
            i++;
            if(found==string::npos){
                a=false;
                break;
            }
            pos=found+1;
            ans++;
            if(i==ans && ans==10){
                a=true;
                break;
            }
        }
        if(a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

