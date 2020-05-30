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
        ll n,m;
        cin>>n>>m;
        string s[n];
        char w;
        for (ll i = 0; i < n; i++)
        {
            cin>>s[i];
        }
        bool ans=0;
        string mark;
        ll o;
        mark=s[0];
        bool fg=0;
        for (ll i = 0; i < m; i++)
        {
            bool fg1=0;
            for (ll j = 0; j < 26; j++)
            {
                mark[i]=(char)((int)'a'+j);
                //set<ll> qw;
                fg=0;
                for (ll k = 1; k < n; k++)
                {
                    set<ll> qw;
                    for (ll l = 0; l < m; l++)
                    {
                        if(s[k][l]!=mark[l])
                            qw.insert(l);
                        if(qw.size()>1)
                        {
                            fg=1;
                            br;
                        }
                    }
                    if(fg)
                        br;
                    
                }
                if(!fg)
                {
                    cout<<mark<<endl;
                    fg1=1;
                    br;
                }
                
            }
            if(fg1)
                br;
            
        }
        if(fg)
            cout<<-1<<endl;
    }



    return 0;
}