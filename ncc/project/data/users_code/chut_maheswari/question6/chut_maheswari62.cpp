#include <bits/stdc++.h>
#define ll long long
#define f(a,i,n) for(ll i=a;i<n;i++)
#define v vector
#define vi vector<ll>
#define all(x) x.begin(),x.end()
using namespace std;
ll inf = (ll) 1e18;
#define MOD 1000000007
vi a;
ll n,k;

ll fpow(ll n, ll k, int p)
{
	ll res = 1;
	for(;k;k/=2) 
	{
		if(k&1) res = (res*n)%p;
		n = (n*n)%p;
	}
	return res;
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
		ll a,b;
		cin>>a>>b;
		ll po = a/b;
		ll gg = a%b;	
		ll ans = 1;
		f(1,i,b)
		{
			ans = (ans * fpow(i,po,b))%b;
		}
		f(1,i,gg+1)
		{
			ans = (ans * i)%b;
		}
		ll pobyb = po/b;
		f(1,i,b)
		{
			ans = (ans * fpow(i,pobyb,b))%b;
		}
		ll pomodb = po%b;
		f(1,i,pomodb+1)
		{
			ans = (ans * i)%b;
		}
		cout << ans << endl;
	}
}