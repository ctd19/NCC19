#include <bits/stdc++.h>
#define pb push_back
#define int long long
#define ll long long
#define f first
#define MOD 1000000007
#define se second

using namespace std;
int n,x,a[1000004];
bool check(int mid){
	int val=mid;
	for(int i=0;i<n;i++){
		if(!(a[i]<=val))return 0;
		val/=x;
	}
	return 1;
}
signed main(){
	ios_base::sync_with_stdio(0);
	//cin.tie(0);
	//cout.tie(0);
	int t;cin>>t;
	while(t--){
		int ans=0;
		cin>>n>>x;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int l=1,r=1e9;
		while(l<=r){
			int mid=(l+r)/2;
			if(check(mid)){
				ans=mid;
				r=mid-1;
			}else{
				l=mid+1;
			}
		}
		cout<<ans<<"\n";
	}
}	