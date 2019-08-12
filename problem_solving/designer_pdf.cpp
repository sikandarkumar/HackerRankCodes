#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main()
{
    vector <int> alpha;
    for(int i=0;i<26;i++){
        int temp;
        cin>>temp;
        alpha.push_back(temp);
    }
    string word;
    cin>>word;

    int size = word.size();
    vector <int> beta;
    for(int i=0;i<word.size();i++){
        int value = int(word[i])-97;
        beta.push_back(alpha[value]);
    }
    int tallest = *max_element(beta.begin(),beta.end());
    int area = size*1*tallest;
    cout<<area;
    return 0;
}

