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
	    ll n,x;
	    cin>>n>>x;
	    
	    ll a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   sort(a,a+n);
	   
	   //if(x%n==0)
	    cout<<x/n<<"\n";
	   
	}

return 0;
}