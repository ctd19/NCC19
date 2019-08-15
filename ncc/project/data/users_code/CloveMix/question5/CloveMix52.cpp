#include <bits/stdc++.h>
#define pb push_back
#define int long long
#define ll long long
#define f first
#define MOD 1000000007
#define se second

using namespace std;
int n,x,a[100004];
bool check(int mid){
	int val=0;
	for(int i=0;i<n;i++){
		val+=min(a[i],mid);
	}
	return (val<=x);
}
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;cin>>t;
	while(t--){
		int ans=0;
		cin>>n>>x;
		for(int i=0;i<n;i++)cin>>a[i];
		int l=1,r=INT_MAX;
		while(l<=r){
			int mid=(l+r)/2;
			if(check(mid)){
				ans=mid;
				l=mid+1;
			}else{
				r=mid-1;
			}
		}
		cout<<ans<<"\n";
	}
}	