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
        map<int,int> m;
        int n,k;
        cin>>n;
        cin>>k;
        
        int i;
        for(i=0;i<n;i++)
        {
            int y;
            cin>>y;
            v.push_back(y);
            m[y]=i;
        }
        
        sort(v.begin(),v.end());
        
        int max=v[v.size()-1];
        
        int z=m[max];
        
        cout<<max*z<<"\n";
        
        
    }
    
    
return 0;
}