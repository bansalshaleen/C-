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
    ve<ll> v1(n,0);
    ve<ll> v2(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>v2[i];
    }
    ll arr[n]={0};
    ll brr[n]={0};
    for (ll i = 0; i < n; i++)
    {
        arr[v1[i]-1]=i;
    }
    for (ll i = 0; i < n; i++)
    {
        brr[v2[i]-1]=((arr[v2[i]-1]-i+n)%n);
    }
    ll crr[n]={0};
    for (ll i = 0; i < n; i++)
    {
        crr[brr[i]]++;
    }
    ll max=1;
    for (ll i = 0; i < n; i++)
    {
        if(max<crr[i])
            max=crr[i];
    }
    cout<<max<<endl;
    return 0;
}