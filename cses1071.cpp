#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	cin>>t;
	while(t--){
		int y,x,a,b;
		cin>>y>>x;
		a=max(y,x);
		b=min(y,x);
		ll s=ll(a-1)*(a-1);
		if (a==b)
		{
			s+=a;
		}
		else if (a%2)
		{
			if (x==a)
			{
				s+=a*2-y;
			}
			else{
				s+=x;
			}
		}
		else
		{
			if (y==a)
			{
				s+=a*2-x;
			}
			else
			{
				s+=y;
			}
		}
		cout<<s<<endl;
	}

	
	return 0;
}