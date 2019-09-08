#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	//comment these lines before uploading in hackerrank
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	int n;
	cin>>n;
	vector<int> a(n);
	int ans=0;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		if(count(a.begin(),a.end(),a[i])>1){
			continue;
		}
		else{
			ans = a[i];
			break;
		}
	}
	cout<<ans;
	return 0;
}

