#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    
    int t,;
    
    cin>>t;
    
    while(t--)
    {
        int n,k;
        vector<int> v;
        cin>>k;
        cin>>n;
        
        int *arr=new int[k];
        int i,x;
        for(i=0;i<k;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        int j;
        sort(v.begin(),v.end());
        int sum=0,c=0;
        for(i=0;i<v.size();i++)
        {
            sum+=v[i];
            if(sum>n)
            {
                break;
            }
            c++;
        }
        
        cout<<c;
    }
    
    
return 0;
}