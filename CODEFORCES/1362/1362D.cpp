#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
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


int main()
{
    FAST;
    ll n,m,a,b,o;
    cin>>n>>m;
    ve<ll> v[n];
    for (ll i = 0; i < m; i++)
    {
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }

    //bool visited[n]={false};
    //map<ll,ll> mp;
    ve<ll> q;
    for (ll i = 0; i < n; i++)
    {
        cin>>o;
        q.pb(o);
    }
    //queue <ll> w;
    //w.push(0);
    bool fg=0;
    for (ll i = 0; i < n; i++)
    {
        set<ll> s;
        //ve<ll> s(n,0);
        for (ll j = 0; j < v[i].size(); j++)
        {
            if(q[v[i][j]]==q[i])
            {
                fg=1;
                br;
            }
            if(q[v[i][j]]<q[i])
            s.insert(q[v[i][j]]);
            //s[q[v[i][j]]-1]++;
        }
        if(fg)
            br;
        if(s.size()!=q[i]-1)
        {
            fg=1;
            br;
        }
        
    }
    
    if(fg)
        cout<<-1<<endl;
    else
    {
        ve<pair<ll,ll>> y;
        for (ll i = 0; i < n; i++)
        {
            y.pb({q[i],i+1});
        }
        sort(y.begin(),y.end());
        for (ll i = 0; i < n; i++)
        {
            cout<<y[i].second<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}