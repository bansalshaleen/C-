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
    ll n;
    cin>>n;
    map<ll,ll> m;
    ll cnt1=0, cnt2=0;
    for (ll i = 0; i < n; i++)
    {
        ll o;
        cin>>o;
        if(m.find(o)==m.end()){
            m[o]=1;
        }
        else{
            m[o]++;
            
        }
        if(m[o]%4==2){
            cnt2++;
        }
        if(m[o]%4==0){
            cnt1++;
            cnt2--;
        }
    }
    ll q;
    cin>>q;
    for (ll i = 0; i < q; i++)
    {
        char ch;
        ll a;
        cin>>ch>>a;
        if(ch=='+'){
            if(m.find(a)==m.end()){
                m[a]=1;
            }
            else{
                m[a]++;
            }
            if(m[a]%4==2){
                cnt2++;
            }
            if(m[a]%4==0){
                cnt1++;
                cnt2--;
            }
        }
        else{
            m[a]--;
            if(m[a]%4==1){
                cnt2--;
            }
            if(m[a]%4==3){
                cnt1--;
                cnt2++;
            }
        }
        //cout<<cnt1<<" "<<cnt2<<endl;
        if(cnt1>=2){
            cout<<"YES"<<endl;
        }
        else if(cnt1==1&&cnt2>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
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