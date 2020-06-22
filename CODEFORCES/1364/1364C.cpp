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

ll arr[100001]={0};

void solve()
{
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        arr[v[i]]=1;
    }
    for (ll i = 0; i < n; i++)
    {
        if(v[i]>(i+1))
        {
            cout<<-1<<endl;
            return;
        }
    }
    ll pt=0;
    if(v[0]==0){
    //cout<<1<<" ";
    pt=1;
    while(arr[pt]!=0)
    {
        pt++;
    }
    cout<<pt<<" ";
    arr[pt]=1;
    }
    else
    {
        cout<<0<<" ";
        pt=2;
    }
    for (ll i = 1; i < n; i++)
    {
        if(v[i]!=v[i-1])
        {
            cout<<v[i-1]<<" ";
        }
        else
        {
            if(pt>100000)
                cout<<100001<<" ";
            else{
            while(arr[pt]!=0)
            {
                pt++;
            }
            cout<<pt<<" ";
            arr[pt]=1;
            }
        }
        
    }
    
    cout<<endl;
    
    
    
}


int main()
{
    FAST;
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
