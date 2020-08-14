#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
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

template <typename Number>
Number gcd(Number u, Number v) {
    while (v != 0) {
        Number r = u % v;
        u = v;
        v = r;
    }
    return u;
}

ll binSearch(ve<ll> v, ll l, ll r,ll x) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
        if (v[mid] == x) 
            return mid; 
        if (v[mid] > x) 
            return binSearch(v, l, mid - 1, x); 
        return binSearch(v, mid + 1, r, x); 
    } 
    return -1; 
} 

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool fg=0;
    string s1="abacaba";
    ll cnt=0;
    if(n<7){
    cout<<"No"<<endl;
    return;
    }
    for (ll i = 0; i < n-6; i++)
    {
        bool fg1=0;
        for (ll j = 0; j < 7; j++)
        {
            if(s[i+j]!=s1[j]){
                fg1=1;
                br;
            }
        }
        if(!fg1){
            cnt++;
        }
    }
    if(cnt==1){
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='?'){
                s[i]='d';
            }
        }
        
    }
    else if(cnt>1){
        cout<<"No"<<endl;
        return;
    }
    else{
        ll mrk=0;
        for (ll i = 0; i < n-6; i++)
        {
            bool fg1=0;
            for (ll j = 0; j < 7; j++)
            {
                if(s[i+j]=='?'){
                    //s[i+j]=s1[j];
                    cc;
                }
                if(s[i+j]!=s1[j]){
                    fg1=1;
                    br;
                }
            }
            if(!fg1){
                bool fg2=0;
                for (ll j = 0; j < 7; j++)
                {
                    //cout<<i<<j<<endl;
                    if(i+4+j>=n){
                        fg2=1;
                        br;
                    }
                    if(s[i+4+j]=='?'){
                        cc;
                    }
                    else if(s[i+4+j]!=s1[j]){
                        fg2=1;
                        br;
                    }
                }
                //cout<<fg1<<fg2<<endl;
                if(!fg2){
                    fg1=1;
                }
                //cout<<fg1<<endl;
            }
            if(!fg1){
                fg=1;
                mrk=i;
                br;
                //cnt++;
            }
        }
        if(fg==0){
            cout<<"No"<<endl;
            return;
        }
        for (ll i = 0; i < n; i++)
        {
            if(i>=mrk&&i<=mrk+6){
                if(s[i]=='?'){
                    s[i]=s1[i-mrk];
                }
            }
            else if(s[i]=='?')
            s[i]='d';
        }
        
    }
    cout<<"Yes"<<endl;
    cout<<s<<endl;
    return;
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t;
    t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}