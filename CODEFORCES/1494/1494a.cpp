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

template <typename Number>
Number binSearch(ve<Number> v, Number l, Number r, Number x) 
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
    //cout<<"hello"<<endl;
    string s;
    cin>>s;
    ll n=s.length();
    ll x=0, y=0, z=0;
    for (ll i = 0; i < n; i++)
    {
        if(s[i]=='A'){
            x++;
        }
        else if(s[i]=='B'){
            y++;
        }
        else{
            z++;
        }
    }
    ve<pair<ll, char>> v;
    v.pb({x,'A'});
    v.pb({y,'B'});
    v.pb({z,'C'});
    sort(v.begin(), v.end());
    ll cnt=0;
    if((v[0].first+v[1].first)!=(v[2].first)){
        cout<<"NO"<<endl;
        //cout<<"adfs"<<endl;
        return;
    }
    else{
        
        if(s[0]!=v[2].second){
        for (ll i = 0; i < n; i++)
        {
            if(s[i]==v[0].second||s[i]==v[1].second){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt<0){
                cout<<"NO"<<endl;
                return;
            }
        }}
        else{
        for (ll i = 0; i < n; i++)
        {
            //cout<<s[i]<<endl;
            //cout<<v[0].first<<endl;
            if((s[i]==v[0].second)||(s[i]==v[1].second)){
                cnt--;
                
            }
            else{
                cnt++;
            }
            if(cnt<0){
                cout<<"NO"<<endl;
                return;
            }
        }}
        
    }
    //cout<<cnt<<endl;
    if(cnt!=0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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