#include <bits/stdc++.h>
#define ll long long
#define f(a,i,n) for(ll i=0;i<n;i++)
#define v vector
#define vi vector<ll>
#define all(x) x.begin(),x.end()
using namespace std;
ll inf = (ll) 1e9;
vi a;
ll n,k;

bool isvalid(ll cur)
{
	ll sum = 0;
	f(0,i,n) sum+=min(cur,a[i]);
	//cout << cur <<" "<< sum << endl;
	if(sum <= k) return true;
	return false;
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
		ll start = 0, end = inf;
		while(start<=end)
		{
			ll mid = (start+end)/2;
			if(isvalid(mid))
				start = mid+1;
			else
				end = mid-1;
		}
		cout<<end<<endl;
	}
}