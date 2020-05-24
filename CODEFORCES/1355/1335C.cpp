#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int sll;
typedef  double ld;
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
    FAST;
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll l1,l2,l3,h1,h2,h3;
    l1=a;l2=b;l3=c;
    h1=b;h2=c;h3=d;
    ll l4,h4;
    ll ans=0;
    ll i=l3+1;
    ll sum=1;
    //ll arr[500000]={0};
    ll count=1;
    for(ll i=l3+1;i<=h1+h2;i++)
    {
        /* code */
        l4=i-h1;
        h4=i-l1;
        sum= max(min(h2,h4)-max(l2,l4)+1,(ll)0);
        //cout<<i<<"uiop"<<endl;
        //cout<<sum<<"fghj"<<endl;
        ans+=sum*count;
        if(count<(h3-l3+1))
        count++;
        //i++;
    }
    cout<<ans<<endl;

    return 0;
}