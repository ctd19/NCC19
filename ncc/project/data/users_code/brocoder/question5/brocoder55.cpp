#include<bits/stdc++.h>
#define ll long long int

using namespace std;



ll fact(ll n,ll b)
{
	if(n==0||n==1)
		return 1;
	ll ans = fact(n-1,b);
	if(ans%b==0){
	
		ans = ans/b;
		//cout<<ans<<"\n";
		ans = n*ans;
		return ans;
	}
	else{
		ans = n*ans;
		return ans;
	}
}
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
		ll a,b;
		cin>>a>>b;
		ll ans = fact(a,b);
		//cout<<ans<<"\n";
		if(ans%b==0)
		{
			ans = ans/b;
			cout<<ans<<"\n";
		}
		else
		{
			ans = ans%b;
			cout<<ans<<"\n";
		}
		/*ll arr[n],count=0,sum=0,flag=0;
		ll min=INT_MAX;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			if(min>arr[i])
			min=arr[i];
		}
		ll ans = max/n;
		cout<<min<<"\n";
		*/
		
		
	}


return 0;
}