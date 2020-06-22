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
    ll a=4,b=4;
    while(1)
    {
        b=a+n;
        bool fg=0, fg1=0;
        for (ll i = 2; i <= sqrt(b); i++)
        {
            /* code */
            if(b%i==0)
            {
                fg=1;
                br;
            }
        }
        for (ll i = 2; i <= sqrt(a); i++)
        {
            /* code */
            if(a%i==0)
            {
                fg1=1;
                br;
            }
        }
        if(fg==1&&fg1==1)
        {
            cout<<b<<" "<<a<<endl;
            br;
        }
        else
        {
            a++;
            b++;
        }
        
    }

    return 0;
}