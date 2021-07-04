
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
    //cout<<"hello"<<endl;
    ll n;
    cin>>n;
    ve<ve<char>> v(n,ve<char> (n,0));
    pair<ll,ll> cd1={0,0}, cd2={0,0};
    bool fg=0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin>>v[i][j];
            if(!fg&&v[i][j]=='*'){
                cd1={i,j};
                fg=1;
            }
            else if(fg&&v[i][j]=='*'){
                cd2={i,j};
            }
        }
        
    }
    if(cd1.first==cd2.first){
        if(cd1.first==0){
            v[cd1.first+1][cd1.second]='*';
            v[cd1.first+1][cd2.second]='*';
        }
        else{
            v[cd1.first-1][cd1.second]='*';
            v[cd1.first-1][cd2.second]='*';
        }

    }
    else if(cd1.second==cd2.second){
        if(cd1.second==0){
            v[cd1.first][cd1.second+1]='*';
            v[cd2.first][cd2.second+1]='*';
        }
        else{
            v[cd1.first][cd1.second-1]='*';
            v[cd2.first][cd2.second-1]='*';
        }

    }
    else{
        v[cd1.first][cd2.second]='*';
        v[cd2.first][cd1.second]='*';
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
        
    }
    
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
        solve();
    }
    
    return 0;
}