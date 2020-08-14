#include <bits/stdc++.h>
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
    ll x1, x2, x3, x4, x5, x6;
    ll y1, y2, y3, y4, y5, y6;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    cin>>x5>>y5>>x6>>y6;

    ll area=0;
    area=(x2-x1)*(y2-y1);
    ll it1, it2, it3;
    ll x7,x8,x9,x10;
    ll y7, y8, y9, y10;
    if(max(x1,x3)>=min(x2,x4)||max(y1,y3)>=min(y2,y4)){
        it1=0;
    }
    else{
        it1= (min(x2,x4)-max(x1,x3))*(min(y2,y4)-max(y1,y3));
        x7=max(x1,x3);
        x8=min(x2,x4);
        y7=max(y1,y3);
        y8=min(y2,y4);
    }
    if(max(x1,x5)>=min(x2,x6)||max(y1,y5)>=min(y2,y6)){
        it2=0;
    }
    else{
        it2= (min(x2,x6)-max(x1,x5))*(min(y2,y6)-max(y1,y5));
        x9=max(x1,x5);
        x10=min(x2,x6);
        y9=max(y1,y5);
        y10=min(y2,y6);
    }
    if(it1==0||it2==0){
        area-=(it1+it2);
    }
    else{
        if(max(x7,x9)>=min(x8,x10)||max(y7,y9)>=min(y8,y10)){
            it3=0;
        }
        else{
            it3= (min(x8,x10)-max(x7,x9))*(min(y8,y10)-max(y7,y9));
        }
        area-=(it1+it2-it3);
    }
    if(area>0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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