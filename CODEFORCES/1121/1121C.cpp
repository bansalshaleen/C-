//not completed
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
    ll n,k,o;
    cin>>n>>k;
    queue<ll> q;
    for (ll i = 0; i < n; i++)
    {
        cin>>o;
        q.push(o);
    }
    ll count=0;
    ve<ll> v(k,0);
    ve<ll> v1(k,0);
    //ll time=0;
    ll m;
    ll ans=0;
    while(!q.empty()){
    //time++;
    //m=n-q.size();
    for (ll i = 0; i < k; i++)
    {
        if(v[i]==v1[i])
        {
            v1[i]=q.front();
            v[i]=0;
            q.pop();
        }
        v[i]++;
    }
    cout<<q.size()<<"adf"<<endl;
    m=q.size()-k;
    cout<<m<<"das"<<endl;
    count=floor(((ld)(100*m)/n)+0.5);
    for (ll i = 0; i < k; i++)
    {
        if(v[i]==count){
            ans++;
            cout<<i<<" "<<ans<<" "<<v1[i]<<" "<<v[i]<<" "<<count<<endl;   
        }
    }
    
    }
    for (ll i = 0; i < k; i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    
    ll p=0;
    while(p<151){
        ll sz=0;
        for (ll i = 0; i < k; i++)
        {
            if(v1[i]==v[i])
            {
                v1[i]=0;
                v[i]=0;
                sz++;
            }
            if(v1[i]!=0)
            v[i]++;
        }
        if(sz==k)
        br;
        m=n-sz;
        count=floor(((ld)(100*m)/n)+0.5);
    
        for (ll i = 0; i < k; i++)
        {
            /* code */
            if(v[i]==count)
            {
                ans++;
                cout<<"ashf"<<endl;
                cout<<i<<" "<<ans<<" "<<v1[i]<<" "<<v[i]<<" "<<count<<endl;   
            }
        }
        p++;
    }
    cout<<ans<<endl;
    return 0;
}