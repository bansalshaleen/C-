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

void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    //char o;
    ll arr[26]={0};
    for (ll i = 0; i < s.length(); i++)
    {
        //cin>>o;
        arr[(int)s[i]-(int)'a']++;
    }
    for (ll len = n; len > 0; len--)
    { 
        //cout<<len<<endl;
        ll j, cnt=len;
        bool visited[len]={0};
        ve<ll> v[len];
        for (ll i = 0; i < len; i++)
        {
            if(!visited[i])
            {
                visited[i]=1;
                v[i].pb(i);
                j=(i+k)%len;
                //cout<<j<<endl;
                while (j!=i)
                {
                    v[i].pb(j);
                    visited[j]=1;
                    j=(j+k)%len;
                }
                
            }
            else
            {
                cnt=i;
                //cout<<cnt<<" "<<len<<endl;
                br;
            }
            
        }
        //cout<<cnt<<endl;
        ll amount=len/cnt;
        bool fg=0;
        ll no=0;
        for (ll i = 0; i < 26; i++)
        {
            no+=(arr[i]/amount);
        }
        
        if(no>=cnt)
        {
            cout<<len<<endl;
            return;
        }
    }    
    cout<<1<<endl;
    return ;
}

int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}