#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int noc,jd;
    cin>>noc>>jd;
    vector <int> c;
    for(int i=0;i<noc;i++){
        int temp;
        cin>>temp;
        c.push_back(temp);
    }
    int e = 100;
    int j=0;
    while(true){
        int jump = (j+jd)%noc;
        if(c[jump]==1){
            e = e-1-2;
            j=jump;
        }
        else{
            e =e-1;
            j=jump;
        }
        if(j==0){
            break;
        }
    } 
    cout<<e<<endl;

    return 0;
}

