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

//set<ll> s;
multiset<ll> m;
    
void primeFactors(ll n)  
{  
    while (n % 2 == 0)  
    {  
        //cout << 2 << " ";  
        //s.insert(2);
        m.insert(2);
        n = n/2;  
    }  
  
    for (ll i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            //s.insert(i);
            m.insert(i);
            n = n/i;  
        }  
    }  
    if (n > 2)  
    {
        //s.insert(n);
        m.insert(n);
    }
    return;
}  


void solve()
{
    ll n;
    cin>>n;
    string b="FastestFinger";
    string a="Ashishgup";
    if(n==1)
    {
        cout<<b<<endl;
        return;
    }
    if(n%2==1)
    {
        cout<<a<<endl;
        return ;
    }
    if(n==2)
    {
        cout<<a<<endl;
        return;
    }
    //s.clear();
    m.clear();
    primeFactors(n);
    if(m.count(2)==1)
    {
        if(m.size()==2)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
        
    }
    else
    {
        if(m.size()==m.count(2))
        {
            cout<<b<<endl;

        }   
        else
        {
            cout<<a<<endl;
        }
        
    }
    
    return ;
 
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