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
        ll n,m;
        cin>>n>>m;
        ve<ve<ll>> v(n,ve<ll> (m,0));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin>>v[i][j];
            }
            
        }
        ve<ll> v1;
        ve<ll> v2;
        ll cnt0=0, cnt1=0;
        if(m>=n){
            for (ll sum = 0; sum < ((n+m-1)/2); sum++)
            {
                cnt0=0;
                cnt1=0;
                for (ll i = 0; i <= min(sum,n-1); i++)
                {
                    /* code */
                    if(v[i][sum-i]==0)
                        cnt0++;
                    else
                    {
                        cnt1++;
                    }
                    
                }
                v1.pb(cnt0);
                v2.pb(cnt1);
            
            }
            //cout<<v1.size()<<" "<<v2.size()<<endl;
            for (ll sum = ((n+m)/2); sum < (n+m-1); sum++)
            {
                cnt0=0;
                cnt1=0;
                for (ll i = n-1; i >= max((sum+1-m),(ll)0); i--)
                {
                    /* code */
                    //cout<<i<<" "<<sum-m+1<<" ff"<<endl;
                    if(v[i][sum-i]==0)
                    cnt0++;
                    else
                    {
                        cnt1++;
                    }
                }
                v1.pb(cnt0);
                v2.pb(cnt1);
                
                
            }
        }
        else
        {
            for (ll sum = 0; sum < ((n+m-1)/2); sum++)
            {
                cnt0=0;
                cnt1=0;
                for (ll i = 0; i <= min(sum,m-1); i++)
                {
                    /* code */
                    if(v[sum-i][i]==0)
                        cnt0++;
                    else
                    {
                        cnt1++;
                    }
                    
                }
                v1.pb(cnt0);
                v2.pb(cnt1);
            
            }
            //cout<<v1.size()<<" "<<v2.size()<<endl;
            for (ll sum = ((n+m)/2); sum < (n+m-1); sum++)
            {
                cnt0=0;
                cnt1=0;
                for (ll i = m-1; i >= max((sum+1-n),(ll)0); i--)
                {
                    /* code */
                    if(v[sum-i][i]==0)
                    cnt0++;
                    else
                    {
                        cnt1++;
                    }
                }
                v1.pb(cnt0);
                v2.pb(cnt1);
                
                
            }
            
        }
        ll ans=0;
        ll p=v1.size();
        //cout<<p<<" "<<v2.size()<<endl;
        /*
        for (ll i = 0; i < p; i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for (ll i = 0; i < p; i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        */
        for (ll i = 0; i < v1.size(); i++)
        {
            if((v1[i]+v1[p-1-i])>=(v2[i]+v2[p-1-i]))
            {
                ans+=(v2[i]+v2[p-1-i]);
            }
            else
            {
                ans+=(v1[i]+v1[p-1-i]);
            }
            
        }
        
        cout<<(ans/2)<<endl;
        
    }
}