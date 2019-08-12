#include <bits/stdc++.h>

using namespace std;



int main()
{
    int i,j,k;
    cin>>i>>j>>k;
    int count=0;
    for(int a=i;a<=j;a++){
        string rev = "";
        int mod,div;
        int temp;
        temp=a;
    while(temp!=0){
        mod = temp %10;
        rev = rev + to_string(mod);
        temp = temp/10;
    }
    int reversed = stoi(rev);
    if(abs(reversed-a)%k==0){
        count++;
    }
    }
    cout<<count;
    return 0;
}

