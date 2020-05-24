#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef  double ld;
#define A 1000000007ll
#define B 998244353ll
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define ve vector
#define cc continue
#define br break
#define PI 3.1415926535

int main()
{
	FAST;

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ve<ll> v(n,0);
		ll a[n+1]={0};
		//bool fg=0;
		//multiset<ll> s;
		ll y[8000]={0};
		for (ll i = 0; i < n; ++i)
		{
			/* code */
			cin>>v[i];
			//s.insert(v[i]);
			y[v[i]-1]++;
			if(i==0)
				a[i+1]=v[i];
			else
				a[i+1]=v[i]+a[i];

		}
		ll q;
		ll x[8000]={0};
		for (ll i = 0; i < n-1; ++i)
		{
			/* code */
			for (ll j = i+2; j < n+1; ++j)
			{
				/* code */
                
				q=a[j]-a[i];
                if(q>n)
                    br;
				if((y[q-1]!=0)&&x[q-1]==0)
				{	
					x[q-1]=y[q-1];
				}
			}
		}
		ll ans=0;
		for (ll i = 0; i < 8000; ++i)
		{
			/* code */
			if(x[i]!=0)
			{
				ans+=x[i];
				//cout<<i+1<<endl;
			}
		}
		cout<<ans<<endl;
		
	}

	return 0;
}