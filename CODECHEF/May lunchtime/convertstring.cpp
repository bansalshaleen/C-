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
    while(t--)
    {
        ll n;
        cin>>n;
        ve<ll> a[26],b[26];
        string s1,s2;
        cin>>s1>>s2;
        bool fg=0;
        for (ll i = 0; i < n; i++)
        {
            if((int)s1[i]<(int)s2[i])
            {
                fg=1;
                br;
            }
            else
            {
                //a[(int)s1[i]-(int)'a']++;
                a[(int)s1[i]-(int)'a'].pb(i);
                b[(int)s2[i]-(int)'a'].pb(i);
            }
            
        }
        for (ll i = 0; i < 26; i++)
        {
            if(a[i].size()==0&&b[i].size()>0)
            {
                fg=1;
                br;
            }
        }
        
        if(fg)
            cout<<-1<<endl;
        else
        {
            ve<ll> v[26];
            for (ll i = 24; i >=0 ; i--)
            {
                /* code */
                //ve<ll> v;
                bool flag=0;
                for (ll j = 0; j < b[i].size(); j++)
                {
                    if(!bs(a[i].begin(),a[i].end(),b[i][j]))
                    {
                        flag=1;
                        v[i].pb(b[i][j]);
                    }
                }
                if(flag)
                    v[i].pb(a[i][0]);
                
            }
            ll cnt=0;
            for (ll i = 0; i < 25; i++)
            {
                if(v[i].size()>0)
                    cnt++;
            }
            cout<<cnt<<endl;
            for (ll i = 24; i >= 0; i--)
            {
                if(v[i].size()>0)
                {
                    cout<<v[i].size()<<" ";
                    for (ll j = 0; j < v[i].size(); j++)
                    {
                        cout<<v[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            
        }
        

    }
    return 0;
}