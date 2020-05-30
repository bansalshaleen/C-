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
    ve<ll> v1;
    ll arr[32]={0};
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    v1=v;
    //sort(v.begin(), v.end(), greater<ll> ());
    for (ll i = 0; i < n; i++)
    {
        ll k=0;
        while(v1[i]!=0)
        {
            if(v1[i]%2==1)
                arr[k]++;
            k++;
            v1[i]/=2;
        }
    }
    ll bit=-1;
    for (ll i = 31; i >= 0; i--)
    {
        /* code */
        if(arr[i]==1)
        {
            bit=i;
            br;
        }
    }
    ll o=-1;
    //cout<<bit<<endl;
    if(bit==-1)
    {
        for (ll i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    else{
        //cout<<"yuiop"<<endl;
    ll p;
    for (ll i = 0; i < n; i++)
    {
        p=v[i];
        if((p>>bit)%2==1)
            o=i;
    }
    cout<<v[o]<<" ";
    for (ll i = 0; i < n; i++)
    {
        if(i!=o)
            cout<<v[i]<<" ";
    }
    cout<<endl;
    
    }
    return 0;
}
    