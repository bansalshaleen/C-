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
        ll a,b;
        cin>>a>>b;
        ll c,d;
        c=min(a,b);
        d=max(a,b);
        ll ans=max(2*c,d);
        cout<<ans*ans<<endl;
    }
    


    return 0;
}