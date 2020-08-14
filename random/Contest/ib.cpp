#include <bits/stdc++.h>
#include <numeric>
#include <iomanip>
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 1000007ll
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



string Solution::solve(string A) {
    int n=A.length();
    ll id=n;
    string one="1";
    while(A[id]=='9'){
        A[id]='0';
        id--;
    }
    if(id==-1){
        one.append(A);
        A=one;
    }
    else{
        A[id]=A[id]+1;
    }
    bool fg=0;
    for(int i=(n/2)-1;i>=0;i--){
        if(A[i]==A[n-i-1]){
            //A[n-i-1]=A[i];
        }
        else if(!fg&&A[i]>A[n-i-1]){
            fg=1;
            A[n-i-1]=A[i];
        }
        else if(!fg&&A[i]<A[n-i-1]){
            fg=1;
            A[i]+=1;
        }
        else if(fg){
            A[n-i-1]=A[i];
        }
    }
    return A;
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
    cin>>t;
    while (t--)
    {
        //int ss=solve();
    }
    
    return 0;
}