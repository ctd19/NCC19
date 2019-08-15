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
	for(ll i=0;i<n;i++){
		if(p<=0)
			return false;
		if(a[i]>p){
			return false;
		}
		p/=x;
	}return true;
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
		ll l=0,r=1e18;
		while(l<=r){
			ll mid=(l+r)/2;
			if(check(mid)){
				r=mid-1;
			}else{
				l=mid+1;
			}
		}
		cout<<l<<"\n";
	}
}