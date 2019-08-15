#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        ll ans[n];
        ans[0]=a[0];
        for(int i=1;i<n;i++)
        {
            ans[i] = a[i]*pow(k,i+1);
        }
        cout<<*max_element(ans,ans+n)<<"\n";
    }
return 0;
}