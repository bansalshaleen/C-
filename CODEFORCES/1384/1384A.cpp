#include <bits/stdc++.h>
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
Number gcd(Number m, Number n) {
    if(m < n)
        swap(m, n);
    if(n == 0)
        return m;
    return gcd(m % n, n);
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

ll power(ll a, ll b){
    ll result=1;
    while(b>0){
        if(b%2==1) result*=a;
        a*=a;
        b/=2;
    }
    return result;
}

void solve()
{
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ve<string> vv(n+1,"");
    if(v[0]!=0){
    vv[0]=string(v[0],'a');
    vv[1]=vv[0];
    }
    else{
        vv[0]="a";
        vv[1]="b";
    }
    char ch='c';
    bool fg=0;
    for(int i=1;i<n;i++){
        fg=0;
        if(v[i]==0){
            vv[i+1]=string(1,ch);
            if(ch=='z')
            ch='a';
            else
            ch++;
            cc;
        }
        if(vv[i-1].length()>vv[i].length()&&ch==vv[i-1][vv[i].length()]){
            if(ch=='z')
            ch='a';
            else
            ch++;
        }
        while(vv[i].length()<v[i]){
            vv[i].pb(ch);
            fg=1;
        }
        vv[i+1]=vv[i].substr(0,v[i]);
        if(fg){
        if(ch=='z')
        ch='a';
        else
        ch++;
        }
    }
    for (ll i = 0; i < n+1; i++)
    {
        cout<<vv[i]<<endl;
    }
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