#include <bits/stdc++.h>
 
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

void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    ll od=0,ev=0;
    for (ll i = 0; i < n; i++)
    {
        if(s[i]=='0'){
            ev++;
        }
        else
        {
            od++;
        }
        
    }
    ll ans=min(ev,od);
    if(ans%2==0){
        cout<<"NET"<<endl;
    }
    else
    {
        cout<<"DA"<<endl;
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
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}