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



ll maxSubArraySum(ve<ll> a, ll size, ll mx) 
{ 
   ll max_so_far = 0, max_ending_here = 0; 
   for (ll i = 0; i < size; i++) 
   { 
       if(a[i]<=mx)
       max_ending_here = max_ending_here + a[i]; 
       else
       {
           max_ending_here=max_ending_here-3000000;
       }
       
       if (max_ending_here < 0) 
           max_ending_here = 0; 
  
       /* Do not compare for all elements. Compare only    
          when  max_ending_here > 0 */
       else if (max_so_far < max_ending_here) 
           max_so_far = max_ending_here; 
   } 
   return max_so_far; 
} 


int main()
{
    FAST;
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    ll arr[31]={0};
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        //arr[v[i]+30]++;
    }
    for (ll i = 1; i < 31; i++)
    {
       arr[i]= maxSubArraySum(v,n,i);
    }
    for (ll i = 1; i < 31; i++)
    {
        arr[i]-=i;
    }
    
    cout<<*max_element(arr,arr+31)<<endl;
    

    


    return 0;
}