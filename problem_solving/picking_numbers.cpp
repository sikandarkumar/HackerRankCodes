#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort (a.begin(), a.begin()+n);
    int maxcount=0;
    for(int j=0;j<n;j++){
        int count = 1;
        for(int k=j+1;k<n;k++){
            if(abs(a[j]-a[k])<=1){
                count++;
            }
            else
                break;
        }
        if(count>maxcount)
            maxcount = count;
    }
    cout<<maxcount;
    return 0;
}

