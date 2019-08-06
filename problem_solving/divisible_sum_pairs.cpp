#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main()
{
    int n,k;
    cin>>n>>k;
    vector <int> ar;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        ar.push_back(temp);
    }
    int count=0;
    int sum;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(i<j){
                sum = ar[i]+ar[j];
                if(sum%k==0){
                    count++;
                }
            }
            }
        }
    cout<<count;
    return 0;
}

