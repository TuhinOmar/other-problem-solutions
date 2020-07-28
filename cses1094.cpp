#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	ll n;
	ll a,b;
	ll turns=0;
	cin>>n;
	cin>>a;
	for (int i = 1; i < n; ++i)
	{
		cin>>b;
		if (a>b)
		{
			turns+=(a-b);
		}else{
			a=b;
		}
	}
	cout<<turns<<endl;

	
	return 0;
}