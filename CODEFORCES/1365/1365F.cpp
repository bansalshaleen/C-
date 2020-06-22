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

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ve<ll> v1(n,0), v2(n,0);
        ve<pair<ll,ll>> v((n/2),{0,0});
        bool arr[(n/2)]={false};
        for (ll i = 0; i < n; i++)
        {
            cin>>v1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin>>v2[i];
        }
        if((n%2==1)&&(v1[n/2]!=v2[n/2]))
        {
            cout<<"No"<<endl;
            //cout<<"fsaf"<<endl;
            cc;
        }
        for (ll i = 0; i < n/2; i++)
        {
            v[i]=make_pair(v1[i],v1[n-1-i]);
        }
        for (ll i = 0; i < n/2; i++)
        {
            for (ll j = 0; j < (n/2); j++)
            {
                if(arr[j]==false){
                if((v2[i]==v[j].first))
                {
                    if((v2[n-i-1]==v[j].second))
                    {
                        arr[j]=true;
                        br;
                    }
                }
                if((v2[i]==v[j].second))
                {
                    if((v2[n-i-1]==v[j].first))
                    {
                        arr[j]=true;
                        br;
                    }
                }}
            }
            
        }
        bool fg=0;
        
        for (ll i = 0; i < (n/2); i++)
        {
            if(!arr[i])
            {
                fg=1;
                br;
            }
        }
        
        if(fg)
            cout<<"No"<<endl;
        else
        {
            cout<<"Yes"<<endl;
        }
        
        
    }

    return 0;
}