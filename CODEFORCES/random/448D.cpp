#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 1000000007ll
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

ll n,m;

ll solve(ll x)
{
    //x++;
    ll count=0;
    for (ll i = 1; i <= n; i++)
    {
        count+=min((x-1)/i,m);
        if(min((x-1)/i,m)==0)
            br;
    }

    return count;
    //cout<<last<<endl;
}

ll binarySearch(ll l, ll r, ll x) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (solve(mid)<x&&solve(mid+1)>=x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (solve(mid) >= x) 
            return binarySearch(l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(mid +1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 




int main()
{
    FAST;
    ll k;
    cin>>n>>m>>k;
    ll ans=binarySearch(0,n*m+1,k);
    cout<<ans<<endl;
    return 0;
}