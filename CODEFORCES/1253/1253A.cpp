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

void solve()
{
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    ve<ll> a(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool fg=0, flag=0;
    bool ans=0;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        if(v[i]!=a[i]&&!flag){
            fg=1;
            s.insert(a[i]-v[i]);
        }
        else if(v[i]==a[i]&&fg){
            flag=1;
            fg=0;
        }
        else if(v[i]!=a[i]){
            ans=1;
            br;
        }
    }
    if(s.size()==1&&((*s.begin())>=0)){
        
    }
    else if(s.size()==0){

    }
    else
    {
        ans=1;
    }
    
    if(ans){
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return;
    
    
    
    
    
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}