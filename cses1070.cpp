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
	cin>>n;
	if (n==1)
	{
		cout<<1<<endl;
	}else if(n<4)
	{
		cout<<"NO SOLUTION"<<endl;
	}else if (n==4){
			cout<<"3 1 4 2 "<<endl;
		}else{
		for (int i = 1; i<=n; i+=2)
		{
				cout<<i<<" ";
		}
		for (int i = 2; i<=n; i+=2)
		{
				cout<<i<<" ";
		}
	}

	
	return 0;
}