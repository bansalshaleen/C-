#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
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
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    ve<ll> v1(n,0);
    ve<ll> curr;
    ve<ll> fin;
    bool flag[n]={0};
    string ans(n,'a');
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]==0){
            curr.pb(i);
            fin.pb(i);
            flag[i]=1;
            v[i]=INT_MAX;
        }
    }
    multiset<char> m;
    set<char> st;
    for (ll i = 0; i < s.length(); i++)
    {
        /* code */
        m.insert(s[i]);
        st.insert(s[i]);
    }
    char alpha;
    
    auto iu=st.rbegin();
    while(fin.size()<n){
    while(iu!=st.rend())
    {
        //iu++;
        if (curr.size()<=m.count(*iu))
        {
            //cout<<*iu<<" 1234"<<endl;
            alpha=*iu;
            iu++;
            br;
        }
        //iu++;
    }
    for (ll it = 0; it<curr.size() ; it++)
    {
        ans[curr[it]]=alpha;
    }
    
    for (ll i = 0; i < n; i++)
    {
        for (ll it = 0; it <curr.size() ; it++)
        {
            v1[i]+=abs(curr[it]-i);
        }
        

    }
    curr.clear();
    for (ll i = 0; i < n; i++)
    {
        if(v[i]==v1[i]&&flag[i]==0)
        {
            curr.pb(i);
            v[i]=INT_MAX;
            fin.pb(i);
            flag[i]=1;
        }
    }
    //cout<<fin.size()<<" 123"<<curr.size()<<endl;
    }
    
    
    //cout<<ans<<" "<<curr.size()<<" "<<*iu<<*(iu++)<<" "<<m.count('a')<<endl;
    auto ip=st.begin();
    while(ip!=st.end())
    {
        //cout<<"afsdsaf"<<endl;
        if (curr.size()<=m.count(*ip))
        {
            //cout<<"fasafd"<<endl;
            alpha=*ip;
            ip++;
            br;
        }
        //iu++;
    }
    for (ll it = 0; it<curr.size() ; it++)
    {
        ans[curr[it]]=alpha;
    }
    cout<<ans<<endl;
    
}


int main()
{
    FAST;
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
