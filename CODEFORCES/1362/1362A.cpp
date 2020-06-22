
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
        ll a,b, div,po;
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else if(a<b)
        {
            div=b/a;
            if((b%a)!=0)
            {
                cout<<-1<<endl;
            }
            else if((div&(div-1))!=0)
            {
                cout<<-1<<endl;
            }
            else
            {
                po=log2(div);
                cout<<ceil((double)(po)/3)<<endl;
            }
            
        }
        else 
        {
            div=a/b;
            if((a%b)!=0)
            {
                cout<<-1<<endl;
            }
            else if((div&(div-1))!=0)
            {
                cout<<-1<<endl;
            }
            else if((a%div)!=0)
            {
                cout<<-1<<endl;
            }
            else
            {
                po=log2(div);
                cout<<ceil((double)(po)/3)<<endl;
            }


        }
        
    }

    return 0;
}