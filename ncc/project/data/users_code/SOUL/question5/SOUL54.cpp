#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll isf(vector<ll>& a,ll x,ll k)
{
    ll sum=0;
    ll n=a.size();
    for(int i=0;i<a.size();i++)
    {
        sum+=min(k,a[i]);
        if(sum>x)
        {
           return 0;
        }
    }
    return 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,x;
	    cin>>n>>x;
	    vector<ll> a(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	        ll l=0;
            ll r=1e9;
            ll m;
            if(isf(a,x,1e9))
            {
                cout<<1e9<<endl;
                continue;
            }
            while(l<=r)
            {
                m=(l+r)/2;
                ll a1=isf(a,x,m);
                ll a2=isf(a,x,m+1);
                if(a1 && !a2)
                {
                    break;
                }
                if(!a1)
                {
                   r=m;
                }
                else
                {
                    l=m;
                }
            }
            cout<<m<<endl;
	}
	

return 0;
}