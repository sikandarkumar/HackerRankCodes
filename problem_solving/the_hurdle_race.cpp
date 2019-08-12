#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main()
{
    int n,k;
    cin>>n>>k;
    vector <int> height;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        height.push_back(temp);
    }
    int max = *max_element(height.begin(),height.end());
    if(k>max){
        cout<<0;
    }
    else{
        cout<<max-k;
    }

    return 0;
}

