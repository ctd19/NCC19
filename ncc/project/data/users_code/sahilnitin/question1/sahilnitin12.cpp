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
	    ll n,s,temp=0,count=0;
	    cin>>n>>s;
	    ll a;
	    
	    ll i;
	    for(i=0;i<n;i++)
	    {
	        cin>>a;
	        if((temp+a)<=s)
	        {
	           temp+=a;
	           count++;
	        }
	    }
	        
	    cout<<count<<"\n";
	}
	

return 0;
}