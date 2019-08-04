#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    std::rotate(arr.begin(), arr.begin()+d, arr.end());

    for(std::vector<int>::iterator it=arr.begin(); it!=arr.end(); ++it){
        cout<<*it<<" ";
    }

    return 0;
}


