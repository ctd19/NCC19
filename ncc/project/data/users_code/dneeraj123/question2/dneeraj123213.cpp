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
        vector<int> v;
        int n,k;
        cin>>n;
        cin>>k;
        int max=0;
        int i;
        for(i=0;i<n;i++)
        {
            int y;
            cin>>y;
            if(y>max)
            {
                max=y;
               
            }
            
            v.push_back(y);
        }
        
        int f=0;
        int flag=0;
        for(i=n-2;i>=0;i--)
        {
            if(v[i+1]!=max && flag==0)
            {
            f=v[i]>v[i+1]?v[i]:v[i+1];
            }
            else
            {
            f=f*k;
            flag=1;
            }
        }
        
        //f*=k;
        
        cout<<f<<"\n";
        
        
    }
    
    
return 0;
}