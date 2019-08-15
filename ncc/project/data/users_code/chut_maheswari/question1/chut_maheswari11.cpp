#include <bits/stdc++.h>
#define ll long long
#define f(a,i,n) for(ll i=0;i<n;i++)
#define v vector
#define vi vector<ll>
#define all(x) x.begin(),x.end()
using namespace std;
ll inf = (ll) 1e18;
int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
	{
		ll k;cin>>k;
		ll n;cin>>n;
		ll arr[k];
		for(ll i=0;i<k;i++)
			cin>>arr[i];

		ll sum=0,cnt=0;
		for(ll i=0;i<k;i++)
		{
			if(sum+arr[i]>n)
			{

			}
			else
			{
				sum+=arr[i];
				cnt++;
			}

		}

		cout<<cnt<<endl;
	}
}