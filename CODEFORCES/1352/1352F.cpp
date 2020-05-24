#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef  double ld;
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
        ll n0,n1,n2;
        cin>>n0>>n1>>n2;
        string s;
        if(n2!=0)
            s.pb('1');
        for (ll i = 1; i <= n2; i++)
        {
            s.pb('1');
        }
        if(n2==0&&n1!=0)
        {
            s.pb('1');
        }
        if(n1%2==1)
        {
            for (ll i = 0; i < n1; i++)
            {
                /* code */
                if(s.back()=='0')
                s.pb('1');
                else
                {
                    s.pb('0');
                }
                
            }
            
        }
        else
        {
            /* code */
            for (ll i = 0; i < n1-1; i++)
            {
                /* code */
                if(s.back()=='0')
                s.pb('1');
                else
                {
                    s.pb('0');
                }
                
            }
        }
        if(n1!=0)
        {
            for (ll i = 0; i < n0; i++)
            {
                s.pb('0');
            }
        }
        else if(n0!=0)
        {
            for (ll i = 0; i < n0+1; i++)
            {
                s.pb('0');
            }
        }
        if(n1!=0&&n1%2==0)
            s.pb('1');

        cout<<s<<endl;
        
    }
    


    return 0;
}