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
        ve<ll> v(n,0);
        bool fg=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        ll od=0, ev=0, md1=0;
        sort(v.begin(), v.end());
        if(v[0]%2==0)
            ev++;
        else
        {
            od++;
        }
        
        for (ll i = 1; i < n; i++)
        {
            if(v[i]%2==0)
                ev++;
            else
            {
                od++;
            }

            if(v[i]-v[i-1]==1)
            {
                md1++;
                fg=1;
                br;
            }
            
        }
        if(!fg&&(od%2==1))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
        

    }
    return 0;
}