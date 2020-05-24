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


ve<ll> v1,v2;
ll n,k;


ll cnt(ll x)
{
    ll num=0;
    for (ll i = 0; i < n; i++)
    {
        if(v1[i]<=x)
            num++;
        
    }
    for (ll i = 0; i < k; i++)
    {
        if(v2[i]>0&&v2[i]<=x)
            num++;
        if(v2[i]<0&&(abs(v2[i])<=num))
            num--;
    }
    return num;
    
}
int main()
{
    FAST;
    //ll n,q;
    cin>>n>>k;
    ll o;
    //multiset<ll> m;

    for (ll i = 0; i < n; i++)
    {
        cin>>o;
        v1.pb(o);
    }
    for (ll i = 0; i < k; i++)
    {
        cin>>o;
        v2.pb(o);
        //return 0;
    }
    if(cnt(1000001)==0)
    {
        cout<<0<<endl;
        return 0;
    }
    ll lft=0, rit=1000001;
    while(lft+1<rit)
    {
        ll mid=(lft+rit)/2;
        if(cnt(mid)>0)
            rit=mid;
        else
        {
            lft=mid;
        }
            
    }
    cout<<rit<<endl;
    


    return 0;
}