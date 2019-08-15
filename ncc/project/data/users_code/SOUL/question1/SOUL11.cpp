#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
	    ll a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    ll ans = a[n-1];
	    for(int i=n-2;i>=0;i--)
	    {
	        ans = ans * k;
		if(ans<a[i])
		{
		    ans = a[i];
		}
	    }
	    cout<<ans<<endl;
	}
	

return 0;
}