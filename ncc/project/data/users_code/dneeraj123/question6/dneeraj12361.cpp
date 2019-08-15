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
        int a,b;
        
        cin>>a>>b;
        
        int f=1;
        
        for(i=2;i<a;i++)
        {
            f=f*i;
        }
        
        a=f;
        
        a=a%b;
        
        cout<<a<<"\n";
        
        
    }
    
return 0;
}