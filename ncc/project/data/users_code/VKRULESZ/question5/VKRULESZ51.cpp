#include<bits/stdc++.h>
#define MOD 1000000007
#define pb push_back
#define all(v) v.begin(),v.end()
#define bolt ios::sync_with_stdio(0)
#define light cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

ll n,x;
ll a[100003];

ll check(ll p){
	ll sum=0;
	for(ll i=0;i<n;i++){
		sum+=min(a[i],p);
	}
	if(sum<=x){
		return 1;
	}
	return 0;
}

int main(){
	bolt;
	light;
	ll t;
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll l=0,r=1e9;
		while(l<=r){
			ll mid=(l+r)/2;
			if(check(mid)){
				l=mid+1;
			}else{
				r=mid-1;
			}
		}
		cout<<l-1<<"\n";
	}
}