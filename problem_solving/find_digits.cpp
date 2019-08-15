#include <bits/stdc++.h>

using namespace std;



int main()
{   int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int temp=n;
        int count=0;
        while(temp!=0){
            int a = temp%10;
            if(a!=0&&n%a==0){
                count++;
            }
            temp = temp/10;
        }
        cout<<count<<endl;
    }
    
    return 0;
}

