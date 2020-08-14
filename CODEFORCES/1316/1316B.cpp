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
    string s,tt;
    cin>>s;
    string temp=s;
    string ans=s;
    ll k=1;
    for (ll i = 2; i <= n; i++)
    {
        if((n-(i-1))%2==0){
            temp=string(s.begin()+i-1, s.end());
            //reverse(temp.begin(), temp.end());
            temp+=string(s.begin(), s.begin()+i-1);
        }
        else{
            temp=string(s.begin()+i-1, s.end());
            //reverse(temp.begin(), temp.end());
            tt=string(s.begin(), s.begin()+i-1);
            reverse(tt.begin(), tt.end());
            temp+=tt;
        }
        //cout<<ans<<" "<<temp<<endl;
        for (ll j = 0; j < n; j++)
        {
            if((int)ans[j]>(int)temp[j]){
                ans=temp;
                k=i;
                br;
            }
            else if((int)ans[j]<(int)temp[j]){
                br;
            }
        }
        
    }
    
    cout<<ans<<endl;
    cout<<k<<endl;
    return ;
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