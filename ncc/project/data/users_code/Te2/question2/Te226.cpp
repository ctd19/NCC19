#include<bits/stdc++.h>
using namespace std;

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
        int *h =new int[n];
        for(int i=0;i<n;i++)
          cin>>h[i];
        int force=0;
        for(int j=n-1;j>=0;j--)
        {
            //force = max(h[j],force*k);
            if(h[j]>=force*k)
              force = h[j];
            else
              force*=k;
        }
        cout<<force<<"\n";
    }
return 0;
}