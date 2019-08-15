#include<bits/stdc++.h>

#define ll long long int



using namespace std;
ll mod;

ll fact(ll n,ll b)
{
	if(n==0||n==1)
		return 1;
	ll ans = fact(n-1,b);
	ans = ans%mod;
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

ll fac(ll n)
{
	if(n==1||n==0)
	return 1;
	return n*fac(n-1);
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
		
		if(a==1)
		{
			cout<<1<<"\n";
			continue;
		}
		
		if(b==1)
		{
			cout<<fac(a)<<"\n";
			continue;
		}
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