#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d1,m1,y1;
    cin>>d1>>m1>>y1;
    int d2,m2,y2;
    cin>>d2>>m2>>y2;

    int fine;
    if(y2<y1){
        fine = 10000;
    }
    else if(y1==y2 && m2<m1){
        fine = 500*(m1-m2);
    }
    else if((y1==y2 && m1==m2) && d2<d1){
        fine = 15 * (d1-d2);
    }
    else{
        fine = 0;
    }
    cout<<fine;


    return 0;
}

