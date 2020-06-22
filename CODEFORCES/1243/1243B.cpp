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


int main()
{
    FAST;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        //ll n=s1.length();
        set<char> q,w;
        ve<ll> v;
        for (ll i = 0; i < n; i++)
        {
            if(s1[i]!=s2[i])
            {
                q.insert(s1[i]);
                w.insert(s2[i]);
                v.pb(i);
            }
        }
        //cout<<s1.size()<<s2.size()<<v.size()<<endl;
        if(q.size()==0&&w.size()==0)
        {
            cout<<"Yes"<<endl;
        }
        else if(q.size()==1&&w.size()==1&&v.size()==2)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
        

    }
    return 0;
}