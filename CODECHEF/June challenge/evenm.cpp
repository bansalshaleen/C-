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
    ll T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        ve<ve<ll>> v(n,ve<ll>(n,0));
        ll count=1;
        if(n%2==1)
        {
            //ll count=1;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    v[i][j]=count++;
                }
                
            }
            
        }
        else
        {
            for (ll i = 0; i < 1; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    v[i][j]=count++;
                }
                count--;
            }
            
            for (ll i = 1; i < n; i++)
            {
                if(i%2==1){
                v[i][0]=(count+n);
                count++;
                for (ll j = 1; j < n; j++)
                {
                    v[i][j]=count++;
                }
                }
                else
                {
                    count++;
                    for (ll j = 0; j < n; j++)
                    {
                        v[i][j]=count++;
                    }
                    count--;
                    
                }
                
            }
            
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
    }

    return 0;
}