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
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        ll cost=0;
        ll count=0;
        ve<ve<char>> v(n,ve<char> (m,'*'));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin>>v[i][j];
                if(v[i][j]=='.')
                    count++;
            }
            
        }
        if(2*x<=y)
            cout<<count*x<<endl;
        else{
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m-1; j++)
            {
                if(v[i][j]=='.'&&v[i][j+1]=='.')
                {
                    cost+=y;
                    v[i][j]='*';
                    v[i][j+1]='*';
                }
                else if(v[i][j]=='.')
                    cost+=x;

            }
            if(v[i][m-1]=='.')
                cost+=x;
            
        }
        cout<<cost<<endl;
        }
        
        

    }

    return 0;
}