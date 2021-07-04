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


ll binSearch(ve<ll> v[], ll l, ll r, ll x, ll w) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
        //cout<<mid<<" "<<v[w][mid]<<"afsd"<<endl;
        if ((v[w][mid] > x)&&(v[w][mid-1]<=x) )
            return mid+1; 
        if (v[w][mid] > x) 
            return binSearch(v, l, mid-1, x, w); 
        return binSearch(v, mid+1 , r, x, w); 
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
    //cout<<"hello"<<endl;
    string s,t;
    cin>>s>>t;
    ll n=s.length();
    ve<ll> v[26];
    for (ll i = 0; i < n; i++)
    {
        v[s[i]-'a'].pb(i+1);
    }
    ll last=0, curr=0;
    bool fg=0;
    for (ll i = 0; i <(ll)t.length(); i++)
    {
        if(v[t[i]-'a'].empty()){
            fg=1;
            br;
        }
        if(curr<v[t[i]-'a'][0]){
            curr=v[t[i]-'a'][0];
            //cout<<"afd"<<endl;
        }
        else if(curr>((v[t[i]-'a'][v[t[i]-'a'].size()-1]))){
            curr=v[t[i]-'a'][0];
            //cout<<*(v[t[i]-'a'].end()--)<<endl;
            //cout<<"afd"<<endl;
            last+=n;
        }
        else{
            //cout<<curr<<endl;
            curr = binSearch(v, 0, v[t[i]-'a'].size()-1, curr, t[i]-'a');
            //cout<<i<<" "<<curr<<endl;
        }
        //cout<<v[t[i]-'a'][v[t[i]-'a'].size()-1]<<endl;
        //cout<<curr<<endl;
    }
    if(fg){
        cout<<-1<<endl;
        return;
    }
    cout<<last+curr<<endl;

    
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
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}