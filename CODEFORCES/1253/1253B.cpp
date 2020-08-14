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

//ve<bool> ti(1000001,0);
void solve()
{
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ve<ll> ans;
    set<ll> s;
    set<ll> s1;
    bool fg=0;
    ll lst=0;
    for (ll i = 0; i < n; i++)
    {
        if(v[i]>0){
        if(s.find(v[i])==s.end()){
            if(s1.find(v[i])!=s1.end()){
                fg=1;
                br;
            }
            s.insert(v[i]);
            s1.insert(v[i]);
        }
        else
        {
            fg=1;
            br;
        }}
        else
        {
            if(s.find((-1*v[i]))==s.end()){
                fg=1;
                br;
            }
            else{
                s.erase((-1*v[i]));
            }
        }
        if(s.size()==0){
            ans.pb(i+1-lst);
            lst=i+1;
            s1.clear();
        }
        //cout<<i<<endl;
    }
    //cout<<fg<<endl;
    if(s.size()!=0){
        fg=1;
    }
    if(fg){
        cout<<-1<<endl;
        return;
    }
    cout<<ans.size()<<endl;
    for (ll i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
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
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}