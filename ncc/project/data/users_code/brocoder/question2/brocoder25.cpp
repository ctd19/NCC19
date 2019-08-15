#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	ll max;
	//mod = pow(10,9)+7;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
	    ll A[n];
	    for(ll i=0;i<n;i++)
	    {
		   cin>>A[i];
		}
		//cout<<"got";
		ll flag=0,ans=0;
		ll count=0;
		for(ll i=1;i<=100000000000;i++)
		{
		  count=0;
		  ll index=i;
		  for(ll j=0;j<n;j++)
		  {
		     if(A[j]<=i)
		     {
		       i=i/k;
		       count++;
             }
             else
             {
               flag=1;
               break;
             }
          }
          if(count==n)
          {
            ans=index;
            break;
          }
          i=index;
        }
        cout<<ans<<"\n";
	}
	return 0;
}