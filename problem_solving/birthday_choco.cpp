#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector <int> s;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s.push_back(temp);
    }
    int d,m;
    cin>>d>>m;
    int count=0;
    for(int j=0;j<n;j++){
        int sum=0;
        for(int k=j;k<m+j;k++){
            sum = sum + s[k];
        }
        if(sum == d)
            count++;
    }
    cout<<count;

    return 0;
}

