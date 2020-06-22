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

ve<ve<char>> v;
ll n,m;
void DFS(pair<ll,ll> p)
{
    ll i,j;
    i=p.first;
    j=p.second;
    v[i][j]='#';
    if(((i+1)<n)&&(v[i+1][j]!='#'))
    {
        DFS({i+1,j});
    }
    if(((j+1)<m)&&(v[i][j+1]!='#'))
    {
        DFS({i,j+1});
    }
    if(((i-1)>=0)&&(v[i-1][j]!='#'))
    {
        DFS({i-1,j});
    }
    if(((j-1)>=0)&&(v[i][j-1]!='#'))
    {
        DFS({i,j-1});
    }
    return;   
}


int main()
{
    FAST;

    ll t;
    cin>>t;
    while (t--)
    {
        //ll n,m;
        cin>>n>>m;
        v.resize(n);
        ll good=0;
        for (ll i = 0; i < n; i++)
        {
            v[i].resize(m);
        }
        for (ll i = 0; i < n; i++)
        {
            //cin>>v[i];
            for (ll j = 0; j < m; j++)
            {
                cin>>v[i][j];
                if(v[i][j]=='G')
                    good++;
            }
            
        }
        //cout<<"adsfh"<<endl;
        bool fg=0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if(v[i][j]=='B')
                {
                    if(v[max((ll)0,i-1)][j]=='G'||v[min(i+1,n-1)][j]=='G'||v[i][max((ll)0,j-1)]=='G'||v[i][min(m-1,j+1)]=='G')
                    {
                        fg=1;
                        br;
                    }
                    else
                    {
                        if(v[max((ll)0,i-1)][j]!='B')
                            v[max((ll)0,i-1)][j]='#';
                        if(v[min(i+1,n-1)][j]!='B')
                            v[min(i+1,n-1)][j]='#';
                        if(v[i][max((ll)0,j-1)]!='B')
                            v[i][max((ll)0,j-1)]='#';
                        if(v[i][min(m-1,j+1)]!='B')
                            v[i][min(m-1,j+1)]='#';
                    }
                }

            }
            if(fg)
                br;
            
        }
        //if(v[n-1][m-1]=='#')
          //  fg=1;
        if(fg)
            cout<<"No"<<endl;
        else if(good!=0&&v[n-1][m-1]=='#')
        {
            cout<<"No"<<endl;
        }
        else if(good==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            bool fg1=0;
            pair<ll,ll> p;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                {
                    if(v[i][j]=='G')
                    {
                        p=make_pair(i,j);
                        DFS(p);
                        fg1=1;
                        br;
                    }
                }
                if(fg1)
                    br;
                
            }
            if(v[n-1][m-1]!='#')
                fg=1;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                {
                    if(v[i][j]=='G')
                    {
                        fg=1;
                        br;
                    }
                }
                if(fg)
                    br;
            }
            if(fg)
                cout<<"No"<<endl;
            else
            {
                cout<<"Yes"<<endl;
            }
            
            
        }
    }
    return 0;
}