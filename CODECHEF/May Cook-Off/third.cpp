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
    while(t--){
        ll n,m;
        cin>>n>>m;
        ve<ve<ll>> v(n,ve<ll>(m,0));
        if(m==1)
        {
            for (ll i = 0; i < n; i++)
            {
                cin>>v[i][0];
                cout<<v[i][0]<<endl;
            }
            
        }
        else{
        ve<ve<ll>> q(n,ve<ll>(m/2,0));
        bool fg=0;
        ll arr[100001]={0};
        ve<ll> odd;
        ve<ll> even;
        for (ll i = 0; i < n; i++)
        {
            
            for (ll j = 0; j < m; j++)
            {
                cin>>v[i][j];
                arr[v[i][j]]++;
            }
            
        }
        ll count=0;
        for (ll i = 1; i < 100001; i++)
        {
            if(arr[i]%2==1)
            {
                count++;
                odd.pb(i);
            }
            else if(arr[i]>0)
                even.pb(i);
                arr[i]/=2;
        }
        if(m%2==1&&count>n){
            fg=1;
            //cout<<"uio";
        }
        else if (m%2==0&&count>0)
        {
            /* code */
            fg=1;
            //cout<<"qwer";
        }
        else
        {
            if((n-count)%2==1&&m%2==1){
                fg=1;
                //cout<<"dfgh";
            }
            else
            {
                if(m%2==0)
                {
                    ll p=0;
                    for (ll i = 0; i < n; i++)
                    {
                        for (ll j = 0; j < m/2; j++)
                        {
                            while(arr[even[p]]==0)
                            {
                                p++;
                                //j--;
                            }    
                            q[i][j]=even[p];
                            arr[even[p]]--;
                        }
                        
                    }
                    
                    
                }
                else
                {
                    ll e=0;
                    while(odd.size()!=n)
                    {
                        if(arr[even[e]]!=0)
                        {
                            //q[i][j]=p;
                            odd.pb(e);
                            odd.pb(e);
                            arr[even[e]]=arr[even[e]]-2;
                        }
                        else
                        {
                            e++;
                        }
                    }
                    
                    //e=1;
                    for (ll i = 0; i < n; i++)
                    {
                        for (ll j = 0; j < m/2; j++)
                        {
                            while(arr[even[e]]==0)
                            {
                                e++;
                                //j--;
                            }
                            q[i][j]=even[e];
                            arr[even[e]]--;
                        }
                        
                    }
                }
                for (ll i = 0; i < n; i++)
                {
                    for (ll j = 0; j < m/2; j++)
                    {
                        cout<<q[i][j]<<" ";
                    }
                    if(!odd.empty())
                        cout<<odd[i]<<" ";
                    for (ll j = m/2-1; j >= 0; j--)
                    {
                        cout<<q[i][j]<<" ";
                    }
                    cout<<endl;
                    
                }
                

            }
            
        }
        if(fg)
            cout<<-1<<endl;
        
    }
    }


    return 0;
}