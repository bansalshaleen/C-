#include <bits/stdc++.h>
#include <numeric>
#include <iomanip>
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
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

template <typename Number>
Number gcd(Number m, Number n) {
    if(m < n)
        swap(m, n);
    if(n == 0)
        return m;
    return gcd(m % n, n);
}

template <typename Number>
Number binSearch(ve<Number> v, Number l, Number r, Number x) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
        if (v[mid] == x) 
            return mid; 
        if (v[mid] > x) 
            return binSearch(v, l, mid - 1, x); 
        return binSearch(v, mid + 1, r, x); 
    } 
    return -1; 
} 

ll power(ll a, ll b){
    ll result=1;
    while(b>0){
        if(b%2==1) result*=a;
        a*=a;
        b/=2;
    }
    return result;
}

void solve()
{
    //cout<<"hello"<<endl;
    ll D,I,S,V,F;
    cin>>D>>I>>S>>V>>F;
    ve<pair<ll,pair<string,ll>>> v[I];
    map<string, ll> m;
    for (ll i = 0; i < S; i++)
    {
        ll B,E,L;
        string s;
        cin>>B>>E;
        cin>>s;
        cin>>L;
        v[E].pb({B,{s,L}});
        m[s]=0;
       // v[E].pb(B);
    }
    //ve<ll> str(S,0);
    //ll V;
    //cin>>V;
    
    for (ll i = 0; i < V; i++)
    {
        /* code */
        ll P;
        cin>>P;
        for(ll j = 0; j < P; j++)
        {
            string s;
            cin>>s;
            m[s]++;
        }
        

    }
    ll ans=0;
    for (ll i = 0; i < I; i++)
    {
        if(v[i].size()<=0){
            cc;
        }
        else
        ans++;
        //cout<<i<<" "<<v[i].size()<<endl;
    }
    
    //cout<<ans<<endl;
    if(D<100){
        //return;
        cout<<ans<<endl;
    }
    for (ll i = 0; i < I; i++)
    {
        if(v[i].size()>0){
            //cout<<i<<endl;
            //cout<<v[i].size()<<endl;
            if(D<100){
                //cout<<ans<<endl;
                cout<<i<<endl;
                cout<<v[i].size()<<endl;
                for (ll j = 0; j < v[i].size(); j++)
                {
                    cout<<v[i][j].second.first<<" "<<1<<endl;
                }
            }
        }
    }
    if(D<100){
        return;
    }
    for (ll i = 0; i < I; i++)
    {
        if(v[i].size()>0){
            //cout<<i<<endl;
            //cout<<v[i].size()<<endl;
                 
                ld sum=0;
                ll cnt=0;
                for (ll j = 0; j < v[i].size(); j++)
                {
                    sum+=m[v[i][j].second.first];
                    if(m[v[i][j].second.first]!=0){
                        cnt++;
                    }
                    //ld ratio = m[v[i][j].second.first]/
                }
                if(cnt==0){
                    ans--;
                    cc;
                }
        }
    }
    cout<<ans<<endl;
    for (ll i = 0; i < I; i++)
    {
        if(v[i].size()>0){
            //cout<<i<<endl;
            //cout<<v[i].size()<<endl;
                 
                ld sum=0;
                ll cnt=0;
                for (ll j = 0; j < v[i].size(); j++)
                {
                    sum+=m[v[i][j].second.first];
                    if(m[v[i][j].second.first]!=0){
                        cnt++;
                    }
                    //ld ratio = m[v[i][j].second.first]/
                }
                if(cnt==0){
                    ans--;
                    cc;
                }
                cout<<i<<endl;
                cout<<cnt<<endl;
                for (ll j = 0; j < v[i].size(); j++)
                {
                    if(m[v[i][j].second.first]==0){
                        cc;
                    }
                    //cout<<m[v[i][j].second.first]<<endl;
                    ll time= ceil((ld)((ld)D/2000)*(ld)((ld)m[v[i][j].second.first]/sum));
                    cout<<v[i][j].second.first<<" "<<time<<endl;
                }
            
            
        }
    }
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t;
    t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}