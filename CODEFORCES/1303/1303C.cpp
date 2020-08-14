#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
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

template <typename Number>
Number gcd(Number u, Number v) {
    while (v != 0) {
        Number r = u % v;
        u = v;
        v = r;
    }
    return u;
}

ll binSearch(ve<ll> v, ll l, ll r,ll x) 
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

void solve()
{   
    string s, tp;
    cin>>s;
    //deque<char> q;
    ll n=s.length();
    //q.pb(s[0]);
    tp="";
    tp+=s[0];
    ll j=0;
    ve<bool> visited(26,0);
    visited[(int)s[0]-(int)'a']=1;
    for(int i=1;i<n;i++){
        //cout<<i<<endl;
        if(tp[j]==s[i]){
            cout<<"NO"<<endl;
            return;
        }
        if(j==0){
            if(tp.length()>1&&tp[1]==s[i]){
                j=1;
            }
            else{
                if(!visited[(int)s[i]-(int)'a'])
                tp.insert(tp.begin(),s[i]);
                else
                {
                    //cout<<"daf"<<endl;
                    cout<<"NO"<<endl;
                    return;
                }
                visited[(int)s[i]-(int)'a']=1;
            }
        }
        else if(j==(tp.length()-1)){
            if(tp[j-1]==s[i]){
                j--;
            }
            else{
                if(!visited[(int)s[i]-(int)'a'])
                tp+=s[i];
                else{
                    cout<<"NO"<<endl;
                    return;
                }
                visited[(int)s[i]-(int)'a']=1;
                j++;
            }
        }
        else{
            if(s[i]==tp[j-1])
            j--;
            else if(s[i]==tp[j+1])
            {
                j++;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
            
        }
    }
    cout<<"YES"<<endl;
    for (ll i = 0; i < 26; i++)
    {
        if(!visited[i])
        tp+=(char)(i+(int)'a');

    }
    cout<<tp<<endl;
    return;
    
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}