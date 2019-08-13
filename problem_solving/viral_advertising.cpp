#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    int ppl=5;
    int like=0;
    int cu;
    for(int i=0;i<n;i++){
        cu = floor(ppl/2);
        like = like + cu;
        ppl =  cu* 3;
    }
    cout<<like;

    return 0;
}

