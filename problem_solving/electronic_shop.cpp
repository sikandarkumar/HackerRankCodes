#include <bits/stdc++.h>
using namespace std;

int main()
{
    int budget,nok,nou;
    cin>>budget>>nok>>nou;
    vector <int> key;
    vector <int> drives;
    
    for(int i=0;i<nok;i++){
        int temp1;
        cin>>temp1;
        key.push_back(temp1);
    }
    for(int j=0;j<nou;j++){
        int temp2;
        cin>>temp2;
        drives.push_back(temp2);
    }
    int max = -1;
    for(int a=0;a<nok;a++){
        for(int b=0;b<nou;b++){
            int sum = key[a] + drives[b];
            if(sum>max && sum<=budget){
                max = sum;
            }
        }
    }
    cout<<max;
    return 0;
}

