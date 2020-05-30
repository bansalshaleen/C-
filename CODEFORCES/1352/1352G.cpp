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
        ll n;
        cin>>n;
        if(n<=3)
            cout<<-1<<endl;
        else
        {
            ll odd, even;
            if(n%2==0)
            {
                even=n;
                odd=n-1;
            }
            else
            {
                even=n-1;
                odd=n;
            }
            
            for (ll i = odd; i > 0; i=i-2)
            {
                cout<<i<<" ";
            }
            if(n>=6)
            {
                cout<<"4 2 ";
                for (ll i = 6; i <=even; i=i+2)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<"4 2 ";
                cout<<endl;
            }
        }
        
    }
    
}