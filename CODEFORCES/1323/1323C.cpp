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
    ll n;
    cin>>n;
    ve<char> v(n);
    ll pos=0, neg=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]=='(')
        {
            pos++;
        }
        else
        {
            neg++;
        }
        
    }
    if(pos!=neg)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll ct=0, ans=0;
    bool fg=0;
    for (ll i = 0; i < n; i++)
    {
        if(v[i]=='(')
            ct++;
        else
        {
            ct--;
        }
        if(ct<0&&!fg)
        {
            fg=1;
            ans++;
        }
        else if(fg&&ct<0)
        {
            ans++;
        }
        else if(fg&&ct>=0)
        {
            fg=0;
            ans++;
        }
        
        
    }
    cout<<ans<<endl;
    return 0;
}