#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;

	while(t--)
	{
	    ll n,s,temp=0,count=0;
	    cin>>n>>s;
	    ll a[n];
	    
	    ll i;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	   sort(a,a+n);

	    for(i=0;i<n;i++)
	    {
	        if(temp+a[i]<=s)
		{
		temp+=a[i];
		count++;
		}
	    }
	        
	    cout<<count<<"\n";
	}
	
return 0;
}