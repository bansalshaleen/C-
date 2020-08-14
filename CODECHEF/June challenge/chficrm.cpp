#include <bits/stdc++.h>
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
        ve<ll> v(n,0);
        ll ch=0, ch1=0;
        bool fg=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        
        for (ll i = 0; i < n; i++)
        {
            //cin>>v[i];
            if(v[i]==5)
            {
                ch++;
            }
            else if(v[i]==10)
            {
                ch--;
                ch1++;
            }
            else
            {
                if(ch1!=0)
                    ch1--;
                else
                    ch-=2;
            }
            
            if(ch<0){
                fg=1;
                br;
            }

        }
        if(fg)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
        
    }
    return 0;
}