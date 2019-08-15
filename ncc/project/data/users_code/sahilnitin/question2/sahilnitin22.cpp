#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;

	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll> a(n);
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll h=a[n-1];
		for(ll i=n-2;i>=0;i--){
			h*=k;
			if(h<a[i])
				h=a[i];
		}
		cout<<h<<"\n";
	}
	
return 0;
}