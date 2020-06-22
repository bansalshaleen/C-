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
    while(t--)
    {
        ll n;
        cin>>n;
        ve<ll> v(n,0);
        ll ev=0,odd=0;
        set<ll> s1;
        set<ll> s2;
        
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                ev++;
                s1.insert(i+1);
            }
            else
            {
                odd++;
                s2.insert(i+1);
            }
            
        }
        if(ev==0&&odd<=1)
        {
            cout<<-1<<endl;
        }
        else if(ev!=0)
        {
            cout<<1<<endl;
            cout<<*s1.begin()<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
        
    }
    return 0;
}