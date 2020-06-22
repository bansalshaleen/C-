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
        ll n,k;
        cin>>n>>k;
        ve<ll> v(n,0);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        
        if(k==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            //ve<ll> p(54,0);
            bool fg=0, fg1=0;
            //ll div=1;
            for (ll j = 0; j < 54; j++)
            {
                fg=0;
                for (ll i = 0; i < n; i++)
                {
                    if(v[i]==0)
                    {
                        cc;
                    }
                    else if((!fg)&&(v[i]%k==1))
                    {
                        fg=1;
                        v[i]/=k;
                    }
                    else if(fg&&(v[i]%k==1))
                    {
                        fg1=1;
                        //cout<<"adf"<<endl;
                        br;
                    }
                    else if(v[i]%k==0)
                    {
                        v[i]/=k;
                    }
                    else if(!((v[i]%k==1)||(v[i]%k==0)))
                    {
                        fg1=1;
                        //cout<<"askmf"<<endl;
                        br;
                    }
                }
                if(fg1)
                    br;
                fg=0;
                //div*=k;
            }    
            if(fg1)
                cout<<"NO"<<endl;
            else 
            cout<<"YES"<<endl;
        }
        




    }
    

    return 0;
}