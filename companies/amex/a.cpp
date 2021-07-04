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

int solution(string &s) {
    // write your code in C++14 (g++ 6.2.0)
    ll n=s.length();
    ve<ll> v(26,0);
    for (ll i = 0; i < n; i++)
    {
        v[s[i]-'a']++;
    }
    for (ll i = 0; i < 26; i++)
    {
        cout<<v[i]<<endl;
    }
    
    set<ll> st;
    int ans=0;
    for (ll i = 0; i < 26; i++)
    {
        if(v[i]==0){
            continue;
        }
        while(st.count(v[i])==1){
            v[i]--;
            ans++;
        }
        st.insert(v[i]);
    }
    return ans;
    

    return 0;
}
void solve()
{
    
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
        //solve();
        string s="ccaaffddecee";
        cout<<solution(s)<<endl;
    }
    
    return 0;
}