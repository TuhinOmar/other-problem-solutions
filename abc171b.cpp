#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(auto&i:a)cin>>i;
	sort(a.begin(),a.end());
	int ans=0;
	for(int i=0;i<k;++i){
		ans+=a[i];
	}
	cout<<ans;

	return 0;
}