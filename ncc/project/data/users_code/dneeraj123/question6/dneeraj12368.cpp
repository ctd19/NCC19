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
        long long int a,b;
        
        cin>>a;
        cin>>b;
        
        long long int f=1,i;
        
        for(i=2;i<=a;i++)
        {
            f=f*i;
        }
        
        a=f;
        while(a%b==0)
        {
            a/=b;    
        }
        
        
        
        a=a%b;
        
        cout<<a<<"\n";
        
        
    }
    
return 0;
}