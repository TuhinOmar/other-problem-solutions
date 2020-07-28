#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int n;
	string s;
	int k=1,m=1;
	cin>>s;
	n=s.size();
	for (int i = 0; i < n; ++i)
	{
		if (s[i]==s[i+1])
		{
			k++;
		}else{
			m=max(m,k);
			k=1;
		}
	}
	cout<<m;
	
	return 0;
}