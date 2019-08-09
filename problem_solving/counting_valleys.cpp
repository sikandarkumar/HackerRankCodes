#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int level=0;
    int num_of_valleys=0;
    for(int i=0;i<n;i++){
        char temp;
        cin>>temp;

          if(temp=='U'){
            level++;
            }
          if(temp=='D'){
           level--;
          } 
         if(level==0&&temp=='U'){
            num_of_valleys++;
    }
    }
    cout<<num_of_valleys;
    return 0;
}

