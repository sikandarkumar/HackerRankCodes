#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;
    vector <int> bill;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        bill.push_back(temp);
    }
    int b;
    cin>>b;
    int total=0;
    for(int j=0;j<n;j++){
        total = total + bill[j];
    }
    int b_actual = (total-bill[k])/2;
    if(b>b_actual){
        cout<<b-b_actual;
    }
    else{
        cout<<"Bon Appetit";
    }
    return 0;
}

