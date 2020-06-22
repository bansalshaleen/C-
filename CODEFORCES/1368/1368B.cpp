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
    string cd="codeforces";
    ll n;
    cin>>n;
    ll arr[10];
    if(n==1){
        cout<<"codeforces"<<endl;
        return ;
    }
    for (ll i = 0; i < 10; i++)
    {
        arr[i]=1;
    }
    ll last=0;
    while(1)
    {
        ll mul=1;
        for (ll i = 0; i < 10; i++)
        {
            mul*=arr[i];
        }
        if(mul>=n)
            br;
        arr[last]++;
        last++;
        last%=10;
    }
    for (ll i = 0; i < 10; i++)
    {
        for (ll j = 0; j < arr[i]; j++)
        {
            cout<<cd[i];
        }
        
    }
    cout<<endl;
    
}

int main()
{
    FAST;
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}