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
        ll n;
        cin>>n;
        ve<ll> v(n,0);
        ll sum=0;
        ll count=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            if(v[i]==0)
                count++;
        }

        if(count>0&&sum==0)
        {
            cout<<count<<endl;
        }
        else if(count>0)
        {    
            if(sum+count==0)
            {
                cout<<count+1<<endl;
            }
            else
                cout<<count<<endl;
        }
        else if(sum==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
    
    return 0;
}