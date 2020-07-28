#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll findMissingNumber(ll a[],ll n){
	int sum=n*(n+1)/2;
	for (int i = 0; i < n-1; ++i)
	{
		sum-=a[i];
	}
	return sum;
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	ll n;
	cin>>n;
	ll a[n-1];
	for (int i = 0; i < n-1; ++i)
	{
		cin>>a[i];
	}


	cout<<findMissingNumber(a,n);
	
	return 0;
}