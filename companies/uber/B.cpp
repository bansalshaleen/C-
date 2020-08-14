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

int Ways(std::string s1, std::string s2, std::string s3) {
    ll p=s1.length();
    ll q=s2.length();
    ll r=s3.length();
    ve<ve<ve<ll>>> dp(r+1, ve<ve<ll>>(p+1,ve<ll> (q+1,0)));
    for (ll i = 0; i < r+1; i++)
    {
        for (ll j = 0; j < p+1; j++)
        {
            for (ll k = 0; k < q+1; k++)
            {
                if(i==0){
                    dp[i][j][k]=1;
                    //cc;
                }
                else if(j==0&&k==0){
                    dp[i][j][k]=0;
                    //cc;
                }
                else if(j==0){
                    if(s3[i-1]==s2[k-1]){
                        dp[i][j][k]=dp[i-1][j][k-1];
                    }
                    else
                    dp[i][j][k]=dp[i][j][k-1];
                }
                else if(k==0){
                    if(s3[i-1]==s1[j-1]){
                        dp[i][j][k]=dp[i-1][j-1][k];
                    }
                    else
                    dp[i][j][k]=dp[i][j-1][k];
                }
                else{
                    if(s3[i-1]==s1[j-1]){
                        dp[i][j][k]+=dp[i-1][j-1][k];
                    }
                    if(s3[i-1]==s2[k-1]){
                        dp[i][j][k]+=dp[i-1][j][k-1];
                    }
                    dp[i][j][k]+= dp[i][j-1][k-1];
                }
            }
            
        }
        
    }
    return dp[r][p][q];
    
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
        string s1="abc";
        string s2="bcd";
        string s3="abcd";
        
        cout<<Ways(s1,s2,s3)<<endl;
    }
    
    return 0;
}