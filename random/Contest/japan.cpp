#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here]
	ll t;
	cin>>t;
	while(t--){
	ll n,m,k ;
	cin>>n>>m;

	vector<pair<int,int>> v ;
	int a[n][m];
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin>>a[i][j];
			v.pb((i+1)*(j+1)*(n-i)*(m-j),a[i][j]) ;
		}
	}
	sort(v.begin(),v.end()) ;
	int i=0 ;
	while(true)
	{
		if (i==v.size() || k==0)
			break ;
		if (v[i].second>0)
		{
			int p = min(v[i].second,k) ;
			v[i].second -= p ;
			v[i].second -= p ;
		}
		i++ ;
	}
	for (int i=0; i<v.size(); i++)
		sum += v[i].first*v[i].second ;
	//cout << sum ;
	}
	cout << sum<<endl;
	return 0;
}