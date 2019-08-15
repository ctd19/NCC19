#include<bits/stdc++.h>
#define ll long long int

using namespace std;


ll fact(ll n,ll b)
{
	if(n==0||n==1)
		return 1;
	ll ans = fact(n-1,b);
	//ans = ans%mod;
	if(ans%b==0){
	
		ans = ans/b;
		//cout<<ans<<"\n";
		ans = n*ans;
		return ans;
	}
	else{
		ans = n*ans;
		//ans = ans%mod;
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
	//mod = pow(10,9)+7;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(a%b==0)
			a=a/b;
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
	}

return 0;
}