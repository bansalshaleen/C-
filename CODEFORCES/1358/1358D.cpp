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
    ll n,x;
    cin>>n>>x;
    ve<ll> d(2*n,0);
    ll sum=0;
    ll hugs=0;
    ve<ll> a(2*n,0);
    ve<ll> b(2*n,0);
    ll ans=0, count=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>d[i];
        d[n+i]=d[i];
        sum+=d[i];
        hugs+=(d[i]*(d[i]+1))/2;
        a[i]=sum;
        b[i]=hugs;
    }
    for (ll i = n; i < 2*n; i++)
    {
        sum+=d[i];
        hugs+=(d[i]*(d[i]+1))/2;
        a[i]=sum;
        b[i]=hugs;
    }
    for (ll i = n; i < 2*n; i++)
    {
        /* code */
        auto o = ub(a.begin(),a.end(),a[i]-x);
        if(o-a.begin()==i)
        {
            count=b[i]-b[i-1]-((d[i]-x)*(d[i]-x+1))/2;
        }
        else
        {
            if((o-a.begin()-1)>=0)
            {
                ll rem=a[i]-a[o-a.begin()-1]-x;
                //cout<<rem<<"poi"<<endl;
                count=(b[i]-b[o-a.begin()-1]-((rem)*(rem+1))/2);
            }
            else
            {
                ll rem=a[i]-x;
                //cout<<rem<<"poi"<<endl;
                count=(b[i]-((rem)*(rem+1))/2);
            }
            
        }
        //cout<<count<<"tyui"<<endl;
        ans=max(count,ans);
        
    }
    cout<<ans<<endl;

    


    return 0;
}