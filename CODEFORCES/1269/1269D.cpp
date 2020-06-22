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
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    ve<ll> v1;
    bool fg=0;
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll count=0;
    ll count1=0;
    for (ll i = 0; i < n; i++)
    {
        if(v[i]%2==1&&!fg)
        {
            fg=1;
            count=0;
        }
        else if (v[i]%2==0&&fg)
        {
            /* code */
            count++;
        }
        else if(v[i]%2==1&&fg)
        {
            v1.pb(count);
            count=0;
        }
        
    }
    ll ans=0;
    bool arr[v1.size()+1]={0};
    for (ll i = 0; i < v1.size(); i++)
    {
        if(v1[i]%2==0&&(arr[i]==0&&arr[i+1]==0))
        {
            arr[i]=1;
            arr[i+1]=1;
        }
    }
    for (ll i = 0; i < v1.size()+1; i++)
    {
        if(arr[i]%2==0)
            ans++;
        
    }
    cout<<((sum-ans)/2)<<endl;
    
}