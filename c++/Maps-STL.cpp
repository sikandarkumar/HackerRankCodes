#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    std::map<string,int> marksheet;
    cin>>q;
    for(int i=0;i<q;i++){
        int type,y;
        string x;
        cin>>type;
        if(type==1){
            cin>>x>>y;
            marksheet[x] +=y;
        }
        if(type==2){
            cin>>x;
            marksheet.erase(x);
        }
        if(type==3){
            cin>>x;
            cout<<marksheet[x]<<endl;
        }

    }
       
    return 0;
}




