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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ve<ll> alph(26,0);
    for (ll i = 0; i < n; i++)
    {
        alph[(int)s[i]-(int)'a']++;
    }
    ll cnt=0;
    for (ll i = 0; i < 26; i++)
    {
        if(alph[i]>0){
            cnt++;
        }
    }
    
    sort(s.begin(), s.end());
    if(s[k-1]!=s[0]||k==n){
        cout<<s[k-1]<<endl;
        return;
    }
    string ans="";
    if(cnt==1){
        for (ll i = 0; i < n/k; i++)
        {
            ans+=s[0];
        }
        if(n%k!=0)
        ans+=s[0];
        
    }
    else{
        if(s[k]==s[0]){
            ans+=s[0];
            for (ll i = k; i < n; i++)
            {
                ans+=s[i];
            }
        }
        else
        {
            ans+=s[0];
            if(cnt==2){
                for (ll i = 1; i < ceil((float)n/k); i++)
                {
                    ans+=s[k];
                }
                
            }
            else
            {
                for (ll i = k; i < n; i++)
                {
                    ans+=s[i];
                }
                
            }
            
        }
        
    }
    cout<<ans<<endl;
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
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}