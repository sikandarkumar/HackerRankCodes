#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int  n,max,min,max_count,min_count;
    cin>>n;
    max_count=0;
    min_count=0;
    vector <int> s;
    for(int i=0;i<n;i++){
        int score;
        cin>>score;
        s.push_back(score);
    }
    max = s[0];
    min = s[0];
    for(int j=1;j<n;j++){
        if(s[j]>max){
            max = s[j];
            max_count++;
        }
        if(s[j]<min){
            min=s[j];
            min_count++;
        }
    }
    cout<<max_count<<" "<<min_count;
    return 0;
}

