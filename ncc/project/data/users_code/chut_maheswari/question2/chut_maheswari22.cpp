#include <bits/stdc++.h>
#define ll long long
#define f(a,i,n) for(ll i=0;i<n;i++)
#define v vector
#define vi vector<ll>
#define all(x) x.begin(),x.end()
using namespace std;

vi a;
ll n,k;

bool isvalid(ll cur)
{
	f(0,i,n)
	{
		if(a[i]>cur) return false;
		cur/=k;
	}
	return true;
}

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
	{
		cin>>n>>k;
		a=vi(n);
		f(0,i,n) cin>>a[i];
		ll start = 1, end = 1000000000;
		while(start<=end)
		{
			ll mid = (start+end)/2;
			if(isvalid(mid))
				end = mid-1;
			else
				start = mid+1;
		}
		cout<<start<<endl;
	}
}