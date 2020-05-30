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
        /* code */
        ll n,k;
        cin>>n>>k;
        bool fg=0;
        if(k>=n)
            cout<<1<<endl;
        else
        {
            /* code */
            ll mn=n;
            set<ll> s;
            s.insert(n);
            for (ll i = 2; i <= sqrt(n); i++)
            {
                /* code */
                if(n%i==0)
                {
                    s.insert(i);
                    s.insert(n/i);
                }


            }
            ll ans=0;
            auto it=s.lower_bound(k);
            if(*it==k)
            {
                ans=k;
                ans=n/ans;
            }
            else if(it!=s.begin())
            {
                it--;
                ans=*it;
                ans=n/ans;
            }
            else
            {
                ans=n;
            }
            cout<<ans<<endl;

        }
        
    }
    return 0;
}