#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int sll;
//typedef  double ld;
#define A 1000000007ll
#define D 1000000000ll
#define B 998244353ll
#define C 1000000000000000000ll
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define oset tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update> 
#define pb push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define ve vector
#define br break
#define PI 3.14159265358979323

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        ll m=abs(y2-y1)+1;
        ll n=abs(x2-x1)+1;
        //cout<<m<<n<<endl;
        ll ans=0;
        if(n==m)
            ans=(((m-1)*m)/2)+(((n-2)*(n-1))/2)+1;
        else
        {
            ll a,b;
            a=min(m,n);
            b=max(m,n);
            //cout<<a<<b<<endl;
            ans=((a-1)*a)/2+(b-a)*(a-1)+1+((a-2)*(a-1))/2;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}