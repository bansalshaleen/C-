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
bool sortrev(const pair<ll,char> &a, const pair<ll,char> &b) 
{ 
    return (a.first > b.first); 
} 
void solve()
{
    //cout<<"hello"<<endl;
    ll n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    ve<pair<ll, char>> v;
    v.pb({u,'a'});
    v.pb({r,'b'});
    v.pb({d,'c'});
    v.pb({l,'d'});
    sort(v.begin(), v.end(), sortrev);
    ve<ll> vv(4,0);
    //ll a,b,c,d;
    for (ll i = 0; i < 4; i++)
    {
        if(v[i].first<0){
            cout<<"NO"<<endl;
            return;
        }
        if(v[i].first==n){
            ll a,b;
            a=((v[i].second-'a')+1)%4;
            b=((v[i].second-'a')+3)%4;
            //cout<<a<<b<<endl;
            for (ll j = i+1; j < 4; j++)
            {
                if(((v[j].second-'a'))==a||((v[j].second-'a')==b)){
                    //vv[v[j].second-'a']++;
                    v[j].first--;
                    
                }
            }
            sort(v.begin(), v.end(), sortrev);
        }
        else if(v[i].first==(n-1)){
            ll a,b;
            a=((v[i].second-'a')+1)%4;
            b=((v[i].second-'a')+3)%4;
            for (ll j = i+1; j < 4; j++)
            {
                if(((v[j].second-'a'))==a||((v[j].second-'a')==b)){
                    //vv[v[j].second-'a']++;
                    v[j].first--;
                    sort(v.begin(), v.end(), sortrev);
                    break;
                }
            }
            
        }
    }
    cout<<"YES"<<endl;
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