#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 1000000007ll
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
    while(t--){
    ll h,c,t;
    cin>>h>>c>>t;
    if(2*t<=h+c)
    {
        cout<<2<<endl;
    }
    else
    {
        ld num=0;
        num=(ld)((ld)(t-c)/(2*t-h-c));
        //cout<<num<<"hjk"<<endl;
        ll x=ceil(num);
        ll y=floor(num);
        if(x==y)
            cout<<2*x-1<<endl;
        else{
        ld xan= abs((ld)t-(ld)(h*x+c*x-c)/((ld)(2*x-1)));
        ld yan= abs((ld)t-(ld)(h*y+c*y-c)/((ld)(2*y-1)));
        //cout<<xan<<yan<<endl;
        if(yan<=xan)
            cout<<2*y-1<<endl;
        else
        {
            cout<<2*x-1<<endl;
        }
        
        }
    }
    }

    return 0;
}