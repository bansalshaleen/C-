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
        //string s3,s4;
        ll arr[26]={0};
        bool fg=0;
        for (ll i = 0; i < n; i++)
        {
            if(s1[i]!=s2[i])
            {
                //s3+=s1[i];
                //s4+=s2[i];
                arr[(int)s1[i]-'a']++;
                arr[(int)s2[i]-'a']++;

            }
        }
        for (ll i = 0; i < 26; i++)
        {
            if(arr[i]%2==1)
            {
                fg=1;
                br;

            }
        }
        if(fg)
        {
            cout<<"No"<<endl;
        }
        else{
        cout<<"Yes"<<endl;
        ve<pair<ll,ll>> v;
        for (ll i = 0; i < s1.length(); i++)
        {
            if(s1[i]!=s2[i])
            {
                for (ll j = i+1; j < s1.length(); j++)
                {
                    if(s1[j]==s1[i])
                    {
                        swap(s2[i],s1[j]);
                        v.pb({j+1,i+1});
                        br;
                    }
                    if(s2[j]==s1[i])
                    {
                        swap(s2[j],s1[j]);
                        swap(s2[i],s1[j]);
                        v.pb({j+1,j+1});
                        v.pb({j+1,i+1});
                        br;
                    }
                }
                
            }
        }
        cout<<v.size()<<endl;
        for (ll i = 0; i < v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        
        }

    }

    return 0;
}