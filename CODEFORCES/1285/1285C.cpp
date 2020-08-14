#include <bits/stdc++.h>
 
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 100000000ll
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

void factorize(ll n, ve<pair<ll,ll> > &v) 
{ 
    ll count = 0; 
  
    while (!(n % 2)) { 
        n >>= 1; 
        count++; 
    } 
  
    if (count) 
        v.pb(make_pair(2,count));
        //cout << 2 << "  " << count << endl; 
  
    for (ll i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) 
            v.pb(make_pair(i,count));
            //cout << i << "  " << count << endl; 
    } 
  
    if (n > 2)
        v.pb(make_pair(n,1)); 
        //cout << n << "  " << 1 << endl; 
} 

void solve()
{
    ll n;
    cin>>n;
    ve<pair<ll,ll> > v;
    factorize(n,v);
    
    ve<ll> final(v.size(),0);
    for (ll i = 0; i < v.size(); i++)
    {
        final[i]=pow(v[i].first, v[i].second);
    }
    sort(final.begin(), final.end());
    ll k=final.size();
    ll a=1, b=1;
    for (ll i = k-1; i >=0; i--)
    {
        if(a<=b){
            a*=final[i];
            //cout<<a<<"das"<<endl;
        }
        else
        {
            b*=final[i];
            //cout<<b<<"ad"<<endl;
        }
        
    }
    cout<<b<<" "<<a<<endl;
    return;
    
    
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}