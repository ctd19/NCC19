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
        int n,x;
        cin>>n>>x;
        int *a = new int[n];
        for(int i=0;i<n;i++)
          cin>>a[i];
        sort(a,a+n);
        int ans=-1,j=n;
        for(int i=0;i<n;i++)
        {
            int key = a[i];
            if(key*(j) < x)
            {
                x -= key;
                j--;
            }
            else
            {
                ans = a[i];
                break;
            }
        }
        /*if(ans==-1)
          ans=1000000000;*/
        cout<<ans<<"\n";
    }
return 0;
}