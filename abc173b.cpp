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

	int t;
	cin>>t;
	int nAc=0,nWa=0,nTle=0,nRe=0;
	while(t--){
		string s;
		cin>>s;
		if(s=="AC")++nAc;
		if(s=="WA")++nWa;
		if(s=="TLE")++nTle;
		if(s=="RE")++nRe;
	}
	cout<<"AC x "<<nAc<<endl;
	cout<<"WA x "<<nWa<<endl;
	cout<<"TLE x "<<nTle<<endl;
	cout<<"RE x "<<nRe<<endl;

	return 0;
}