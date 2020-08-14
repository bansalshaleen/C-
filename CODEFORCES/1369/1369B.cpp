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
    //cout<<n<<endl;
    string s;
    ve<ll> v, temp;
    cin>>s;
    //cout<<s<<endl;
    bool fg=0, fg1=0;
    for (ll i = n; i >= 0; i--)
    {
        if(s[i]=='1'&&!fg){
            v.pb(1);
        }
        else if(s[i]=='0'&&!fg1){
            fg=1;
            temp.pb(0);
        }
        else if(s[i]=='1'&&fg){
            fg1=1;
        }
        else if(s[i]=='0'&&fg1){
            temp.clear();
            temp.pb(0);
            temp.pb(0);
            fg1=0;
        }
    }
    if(s[0]=='1'){
        if(temp.size()!=0)
        v.pb(0);
    }
    else{
    for (ll i = 0; i < temp.size(); i++)
    {
        v.pb(temp[i]);
    }}
    for (ll i = 0; i < v.size(); i++)
    {
        cout<<v[v.size()-i-1];
    }
    cout<<endl;
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