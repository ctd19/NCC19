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
        cin>>n;
        cin>>k;
        int max=0;
        int i,z;
        for(i=0;i<n;i++)
        {
            int y;
            cin>>y;
            if(y>max)
            {
                max=y;
                z=i;
            }    
        }
        
        for(int j=0;j<z;j++)
        {
            max*=k;    
        }
        
        cout<<max<<"\n";
        
        
    }
    
    
return 0;
}