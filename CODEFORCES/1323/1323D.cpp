// not completed

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
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll arr[25]={0};
    for (ll i = 1; i <= 25; i++)
    {
        ll ct=0;
        for (ll j = 0; j < n; j++)
        {
            if(v[j]%2==1)
            {
                ct++;
                cout<<i<<"adsgfk";
            }
            v[j]/=2;
        }
        if(ct%2==1)
        {
            arr[i-1]=1;
            cout<<ct<<endl;
        }
    }
    for (ll i = 0; i < 25; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //ll ans=0;
    for (ll i = 24; i >=0 ; i--)
    {
        ans=ans<<1;
        if(arr[i]==1)
            ans+=1;
    }
    cout<<ans<<endl;

    return 0;
}