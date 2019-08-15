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
	ll n,k;
	while(t--)
	{
	    cin>>k>>n;
	    ll a[k];
	    for(int i=0;i<k;i++)
	    {
	        cin>>a[i];
	    }
	    ll ans=0;
	    sort(a,a+k);
	    for(int i=0;i<k;i++)
	    {
	        ans += min(a[i],n);
	        n -= a[i];
	        if(n<=0)
	        {
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}

return 0;
}