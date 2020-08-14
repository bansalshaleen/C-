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
    ll n,m;
    cin>>n>>m;
    bool fg=0;
    if(n>m){
        fg=1;
        swap(n,m);
    }
    ve<ve<int>> v(n,ve<int> (m,0));
    if(fg){
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin>>v[j][i];
            }
            
        }
        
    }
    else{
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin>>v[i][j];
            }
            
        }
        
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    else if(n>=4){
        cout<<-1<<endl;
        return ;
    }
    for (ll i = 0; i < n-1; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            v[i][j]+=v[i+1][j];
        }
        
    }
    n=n-1;
    
    if(n==1){
        ve<ll> dp(m,0);
        if((v[0][0]+v[0][1])%2==1){
            dp[1]=0;
        }
        else{
            dp[1]=1;
        }
        for (ll i = 2; i < m; i++)
        {
            //ll f=dp[i-1]+v[0][i]%2==1?0:1;
            ll s=dp[i-2];
            ll q1=v[0][i-1]+v[0][i-2];
            ll q2=v[0][i-1]+v[0][i];
            if(q1%2==1&&q2%2==1){

            }
            else if(q1%2==0&&q2%2==0){
                s+=1;
            }
            else if(q2%2==1){
                s+=2;
            }
            else{
                s+=1;
            }
            dp[i]=s;
        }
        cout<<dp[m-1]<<endl;
    }
    else{
        ve<ll> dp(m,0);
        ll sq1=v[0][0]+v[0][1];
        ll sq2=v[1][0]+v[1][1];
        if(sq1%2==1&&sq2%2==1){
            dp[1]=0;
        }
        else{
            dp[1]=1;
        }
        for (ll i = 2; i < m; i++)
        {
            ll f=dp[i-2];
            ll q1=v[0][i-1]+v[0][i-2];
            ll q2=v[0][i-1]+v[0][i];
            ll q3=v[1][i-1]+v[1][i-2];
            ll q4=v[1][i-1]+v[1][i];
            ll cnt=0;
            if(q1%2==1){
                cnt++;
            }
            if(q2%2==1){
                cnt++;
            }
            if(q3%2==1){
                cnt++;
            }
            if(q4%2==1){
                cnt++;
            }
            if(cnt==0){
                f+=1;
            }
            else if(cnt==1||cnt==3){
                f+=2;
            }
            else if(cnt==2){
                if((q1%2==1&&q4%2==1)||(q2%2==1&&q4%2==1)){
                    f+=2;
                }
                else{
                    f+=1;
                }
            }
            dp[i]=f;
            
        }
        cout<<dp[m-1]<<endl;
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