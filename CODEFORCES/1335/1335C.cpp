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
        ll n,o;
        cin>>n;
        ll arr[n+1]={0};
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin>>o;
            arr[o]++;
            s.insert(o);
        }
        
        
        ll num=*max_element(arr,arr+n+1);
        ll sz=s.size();
        //cout<<sz<<" "<<num<<endl;
        if(sz==num)
        {
            cout<<num-1<<endl;
        }
        else
        {
            cout<<min(num,sz)<<endl;
        }

        

        
    }

    return 0;
}