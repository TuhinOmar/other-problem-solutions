#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)

typedef long long int ll;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		for(int j=0;j<i+1;++j){
			if(i==0||i==n-1||j==0||j==i){
				cout<<"*";
				cout<<" ";
			}else{
				cout<<" ";
				cout<<" ";
			}
		}
		cout<<endl;
	}

	return 0;
}