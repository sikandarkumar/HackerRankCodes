#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin>>n;

    vector <int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int bird_no=1;
    int max=0;
    int set_bird_no=0;
    while(bird_no<=5){
        int a = count(arr.begin(), arr.end(),bird_no);
        if(a>max && set_bird_no<=bird_no){
            max = a;
            set_bird_no = bird_no;
        }
        bird_no++;
    }
    cout<<set_bird_no;
    return 0;
}

