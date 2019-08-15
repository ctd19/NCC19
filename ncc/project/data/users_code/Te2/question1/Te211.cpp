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
        int k,n,i;
        cin>>k>>n;
        int *a=new int[k];
        for(i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        for(i=0;i<k;i++)
        {
            n-=a[i];
            if(n<0)
              break;
        }
        cout<<i<<"\n";
    }
return 0;
}