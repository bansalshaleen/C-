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
    while (t--)
    {
        /* code */
        ll n,x,a,b;
        cin>>n>>x;
        ve<ll> v[n];
        for (ll i = 0; i < n-1; i++)
        {
            cin>>a>>b;
            v[a-1].pb(b-1);
            v[b-1].pb(a-1);
        }
        if(v[x-1].size()<=1)
        {
            cout<<"Ayush"<<endl;
        }
        else
        {
            ve<ll> sz;
            //ll count=0;
            bool visited[n]={false};
            visited[x-1]=true;
            for (ll i = 0; i < v[x-1].size(); i++)
            {
                queue<ll> q;
                q.push(v[x-1][i]);
                visited[v[x-1][i]]=true;
                ll count=0;
                while(!q.empty())
                {
                    ll f=q.front();
                    q.pop();
                    count++;
                    for (ll j = 0; j < v[f].size(); j++)
                    {
                        /* code */
                        if(visited[v[f][j]]==false)
                        {
                            q.push(v[f][j]);
                            visited[v[f][j]]=true;
                        }
                    }
                    
                }
                sz.pb(count);
                count=0;
            }
            ll ans=0;
            for (ll i = 0; i < sz.size(); i++)
            {
                /* code */
                //cout<<sz[i]<<" ";

                if(sz[i]>1)
                    ans+=(sz[i]-1);
            }
            //cout<<endl; 
            if(sz.size()>2)
            {
                ans+=(sz.size()-2);
            }
            if(ans%2==1)
                cout<<"Ayush"<<endl;
            else
            {
                cout<<"Ashish"<<endl;
            }
            
            

        }
        
        
    }
    

    return 0;
}