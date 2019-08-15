#include<bits/stdc++.h>
#define MOD 1000000007
#define pb push_back
#define all(v) v.begin(),v.end()
#define bolt ios::sync_with_stdio(0)
#define light cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

int main(){
	bolt;
	light;
	ll t;
	cin>>t;
	while(t--){
		ll k,n;
		cin>>k>>n;
		ll a[10003];
		for(ll i=0;i<k;i++){
			cin>>a[i];
		}
		sort(a,a+k);
		ll sum=0;
		ll ans=0;
		for(ll i=0;i<k;i++){
			if(sum+a[i]<=n){
				sum+=a[i];
				ans++;
			}else break;
		}
		cout<<ans<<"\n";
	}
}