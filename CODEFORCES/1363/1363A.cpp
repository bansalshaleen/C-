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
        ll n,x,o;
        cin>>n>>x;
        ll odd=0, even=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>o;
            if(o%2==1)
            odd++;
            else
            even++;

        }
        if(odd==0)
        {
            cout<<"No"<<endl;
        }
        else if(even==0&&x%2==0)
        {
            cout<<"No"<<endl;
        }
        else if(odd%2==0)
        {
            if(even>=(x-(odd-1)))
                cout<<"Yes"<<endl;
            else
            {
                cout<<"No"<<endl;
            }
            
        }
        else
        {
            if(even==0&&x%2==0)
                cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
        }
        
        
    }

    return 0;
}