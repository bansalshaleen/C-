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


void solve()
{
    ll n;
    cin>>n;
    //cout<<n<<endl;
    ll a=0,b=0;
    a=sqrt(n);
    b=a;
    ll mul=a*a;
    ll rem = n%mul;
    ll chnge=0;
    //cout<<a<<b<<endl;
    if(rem!=0)
    {
        if(rem<(4*(a-2)))
            chnge=rem;
        else
        {
            chnge=(rem-4*(a-2))*2+(4*(a-2));
        }
        
    }
    cout<<n+2*a+2*b+chnge<<endl;
    for (ll i = 0; i < a; i++)
    {
        for (ll j = 0; j < b+2; j++)
        {
            cout<<j<<" "<<i+1<<endl;
        }
        
    }
    for (ll i = 0; i < b; i++)
    {
        cout<<i+1<<" "<<0<<endl;
        cout<<i+1<<" "<<a+1<<endl;
    }

    if(rem!=0)
    {
        for (ll i = 0; i < a-2; i++)
        {
            cout<<-1<<" "<<i+2<<endl;
            rem--;
            if(rem==0)
            br;
        }
        if(rem!=0){
        for (ll i = 0; i < a-2; i++)
        {
            cout<<a+2<<" "<<i+2<<endl;
            rem--;
            if(rem==0)
            br;
        }}
        if(rem!=0){
        for (ll i = 0; i < a-2; i++)
        {
            cout<<i+2<<" "<<-1<<endl;
            rem--;
            if(rem==0)
            br;
        }}
        if(rem!=0){
        for (ll i = 0; i < a-2; i++)
        {
            cout<<i+2<<" "<<a+2<<endl;
            rem--;
            if(rem==0)
            br;
        }
        }
        if(rem!=0)
        {
            cout<<-1<<" "<<a+1<<endl;
            rem--;
            if(rem!=0)
                cout<<0<<" "<<a+2<<endl;
            rem--;
            if(rem!=0)
                cout<<a+1<<" "<<a+2<<endl;
            rem--;
            if(rem!=0)
                cout<<a+2<<" "<<a+1<<endl;
            rem--;
            if(rem!=0)
                cout<<a+2<<" "<<0<<endl;
            rem--;
            if(rem!=0)
                cout<<a+1<<" "<<-1<<endl;
            rem--;
            if(rem!=0)
                cout<<-1<<" "<<0<<endl;
            rem--;
            if(rem!=0)
                cout<<0<<" "<<-1<<endl;
            rem--;
        }
    }    
    return ;


    
}

int main()
{
    FAST;
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}