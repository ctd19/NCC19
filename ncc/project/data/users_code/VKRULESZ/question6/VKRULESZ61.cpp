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
	ll t,i,n,b,j,val;
	cin>>t;
	while(t--){
		cin>>n>>b;
		val=1;
		for(i=1;i<=b-1;i++){
			val=(val*i)%b;
		}
		val=(val*(n/b))%b;
		for(i=1;i<=n%b;i++)
			val=(val*i)%b;
		cout<<val<<"\n";
	}
}