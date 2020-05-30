#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
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
        ll odds=ceil((ld)n/2);
        //cout<<odds<<endl;
        ll even=n/2;
        ll ans=odds-1;
        ll i=2;
        ll p=log2(n);
        if(pow(2,p)==n)
            cout<<-1<<endl;
        else{
        while (even>0)
        {
            ans+=i*(ceil((ld)even/2));
            i*=2;
            even-=ceil((ld)even/2);
        }
        cout<<ans<<endl;
        }
    }
    

    return 0;
}