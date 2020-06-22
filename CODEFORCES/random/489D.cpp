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

    ll n,m,a,b;
    cin>>n>>m;
    ve<ll> v[n];
    for (ll i = 0; i < m; i++)
    {
        cin>>a>>b;
        v[a-1].pb(b-1);
        //v[b-1].pb(a-1);

    }
    ll count=0;
    for (ll i = 0; i < n; i++)
    {
        //multiset<ll> s;
        //set<ll> q;
        ve<ll> q(3000,0);
        for (ll j = 0; j < v[i].size(); j++)
        {
            for (ll k = 0; k < v[v[i][j]].size(); k++)
            {
                if(v[v[i][j]][k]!=i)
                {
                    q[v[v[i][j]][k]]++;
                    //q.insert(v[v[i][j]][k]);
                }
                
            }
            
        }
        sort(q.begin(),q.end(), greater<ll>());
        for (ll j = 0; j < 3000; j++)
        {
            if(q[j]!=0)
            {
                count+=((q[j]*(q[j]-1))/2);
            }
            else
            {
                br;
            }
            
        }
        

    }
    cout<<count<<endl;


    return 0;
}
    