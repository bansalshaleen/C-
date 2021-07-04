
  // 17.4.1.2 Headers

  // C
  #ifndef _GLIBCXX_NO_ASSERT
  #include <cassert>
  #endif
  #include <cctype>
  #include <cerrno>
  #include <cfloat>
  #include <ciso646>
  #include <climits>
  #include <clocale>
  #include <cmath>
  #include <csetjmp>
  #include <csignal>
  #include <cstdarg>
  #include <cstddef>
  #include <cstdio>
  #include <cstdlib>
  #include <cstring>
  #include <ctime>

  #if __cplusplus >= 201103L
  #include <ccomplex>
  #include <cfenv>
  #include <cinttypes>
  #include <cstdbool>
  #include <cstdint>
  #include <ctgmath>
  #include <cwchar>
  #include <cwctype>
  #endif

  // C++
  #include <algorithm>
  #include <bitset>
  #include <complex>
  #include <deque>
  #include <exception>
  #include <fstream>
  #include <functional>
  #include <iomanip>
  #include <ios>
  #include <iosfwd>
  #include <iostream>
  #include <istream>
  #include <iterator>
  #include <limits>
  #include <list>
  #include <locale>
  #include <map>
  #include <memory>
  #include <new>
  #include <numeric>
  #include <ostream>
  #include <queue>
  #include <set>
  #include <sstream>
  #include <stack>
  #include <stdexcept>
  #include <streambuf>
  #include <string>
  #include <typeinfo>
  #include <utility>
  #include <valarray>
  #include <vector>

  #if __cplusplus >= 201103L
  #include <array>
  #include <atomic>
  #include <chrono>
  #include <condition_variable>
  #include <forward_list>
  #include <future>
  #include <initializer_list>
  #include <mutex>
  #include <random>
  #include <ratio>
  #include <regex>
  #include <scoped_allocator>
  #include <system_error>
  #include <thread>
  #include <tuple>
  #include <typeindex>
  #include <type_traits>
  #include <unordered_map>
  #include <unordered_set>
  #endif
using namespace std;


typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 10000000000ll
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
    //cout<<"hello"<<endl;
    ll n;
    cin>>n;
    ve<ll> aa(3,0),aaa;
    ve<ll> bb(3,0),bbb;
    for (ll i = 0; i < 3; i++)
    {
        cin>>aa[i];
    }
    for (ll i = 0; i < 3; i++)
    {
        cin>>bb[i];
    }
    aaa=aa;
    bbb=bb;
    
    ve<ll> arr {0,1,2,3,4,5};

    ve<pair<ll,ll>> v{{0,0}, {0,2}, {1,1}, {1,0}, {2,2}, {2,1}};

    ve<ve<ll>> vv;
    vv.pb(arr);
    while (next_permutation(arr.begin(), arr.end())){
        vv.pb(arr);
    }
    /*
    for (ll i = 0; i < vv.size(); i++)
    {
        for (ll j = 0; j < vv[i].size(); j++)
        {
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }
    
    */
   ll ans=A;
    for (ll i = 0; i < vv.size(); i++)
    {
        ll cnt=0;
        for (ll j = 0; j < vv[i].size(); j++)
        {
            aa[v[vv[i][j]].first]=aa[v[vv[i][j]].first]-min(aa[v[vv[i][j]].first], bb[v[vv[i][j]].second]);
            bb[v[vv[i][j]].second]=bb[v[vv[i][j]].second]-min(aa[v[vv[i][j]].first], bb[v[vv[i][j]].second]);
        }
        for (ll k = 0; k < 3; k++)
        {
            cnt+=aa[k];
        }
        ans=min(ans,cnt);
        aa=aaa;
        bb=bbb;
        //cout<<cnt<<endl;
    }
    ll ans2=0;
    
    
    for (ll i = 0; i < 3; i++)
    {
        ans2=min(aa[0],bb[1])+min(aa[1], bb[2])+min(aa[2],bb[0]);
    }
    cout<<ans<<" "<<ans2<<endl;
    
    
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