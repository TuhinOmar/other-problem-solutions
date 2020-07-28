#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n=5;
	int ans=0;
	int a[]={10,9,8,7,7,7,5,5,5,5,5};
	int length=sizeof(a)/sizeof(a[0]);
	for (int i = 0; i < length; ++i)
	{
		if (a[i]>=n)
		{
			ans++;
			if (a[i]==a[i+1])
			{
				++i;
			}
		}
	}
	cout<<ans;	
	return 0;
}