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
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.length();
        ll lst1=-1;
        ll lst2=-1;
        ll lst3=-1;    
        ll mn=0;   
        for (ll i = 0; i < n; i++)
        {
            /* code */
            if(mn==3)
                br;
            if(s[i]=='1')
                lst1=i;
            else if(s[i]=='2')
                lst2=i;
            else
            {
                lst3=i;
            }
            ve<ll> v(3,0);
            v[0]=lst1; v[1]=lst2; v[2]=lst3;
            if(lst1>-1&&lst2>-1&&lst3>-1)
            {
                if(mn!=0)
                mn=min(mn,mxe(v)-mne(v)+1);
                else 
                mn=mxe(v)-mne(v)+1;
                *min_element(v.begin(), v.end())=-1;
            }
        }
        cout<<mn<<endl;
        
    }
    return 0;
}