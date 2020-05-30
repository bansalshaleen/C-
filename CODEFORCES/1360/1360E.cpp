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
    while (t--)
    {
        ll n;
        cin>>n;
        //ve<ve<ll>> v(n,ve<ll> (n,0));
        string s[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>s[i];
            //cout<<s[i];
        }
        bool fg=0;
        for (ll i = 0; i < n-1; i++)
        {
            for (ll j = 0; j < n-1; j++)
            {
                if(s[i][j]=='1'&&(s[i+1][j]=='0'&&s[i][j+1]=='0'))
                {
                    fg=1;
                    br;
                }
            }
            if(fg)
                br;
            
        }
        if(fg)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
        }
        
        
    }
    return 0;
}