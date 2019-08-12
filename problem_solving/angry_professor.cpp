#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector <int> time;
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            time.push_back(temp);
        }
        int count=0;
        for(int k=0;k<n;k++){
            if(time[k]<=0){
                count++;
            }
        }
        if(count<k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

