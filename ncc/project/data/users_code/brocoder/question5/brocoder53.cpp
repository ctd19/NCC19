#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


ll t,n;
	cin>>t;
	ll max;
	while(t--)
	{
		
		cin>>n>>max;
		ll arr[n],count=0,sum=0,flag=0;
		ll min=INT_MAX;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			if(min>arr[i])
			min=arr[i];
		}
		ll ans = max/n;
		cout<<ans<<"\n";
		
		//cout<<min<<"\n";
	}

return 0;
}