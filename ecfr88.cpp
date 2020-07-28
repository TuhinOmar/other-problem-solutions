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
		int n,m,k,x;
		cin>>n>>m>>k;
		((m-n/k)%(k-1))==0?x=((m-n/k)/(k-1)):x=((m-n/k)/(k-1))+1;
		if (n/k>=m)
		{
			cout<<m<<'\n';
		}else{
			cout<<n/k-x<<'\n';
		}
	}
	return 0;
}