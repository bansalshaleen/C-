#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 1000000007ll
#define B 998244353ll
#define FST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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


int main()
{
    FST;
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,m,k;
    cin>>n>>m>>k;
    if(m<=(n/k))
        cout<<m<<endl;
    else
    {
        ll rem = ceil((ld)(m-(n/k))/(k-1));
        cout<<(n/k)-rem<<endl;
    }
    }

    return 0;
}