
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
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    ll n=s.length();
    map<char,ll> m;
    m['0']=a;
    m['1']=b;
    bool fg=0;
    if(n%2==1){
        if(s[n/2]=='?'){
            fg=1;
        }
        else{
            m[s[n/2]]--;
        }

    }
    //cout<<m['0']<<" "<<m['1']<<"afds"<<endl;
    for (ll i = 0; i < n/2; i++)
    {
        /* code */
        if(m['0']<0||m['1']<0){
            cout<<-1<<endl;
            return;
        }
        if(s[i]=='?'&&s[n-i-1]=='?'){
            cc;
        }
        else if(s[i]=='?'||s[n-i-1]=='?'){
            if(s[i]=='?'){
                s[i]=s[n-i-1];
            }
            else{
                s[n-i-1]=s[i];
            }
            m[s[i]]-=2;
            //cout<<m['1']<<endl;
        }
        else{
            if(s[i]!=s[n-i-1]){
                cout<<-1<<endl;
                return;
            }
            else{
                m[s[i]]-=2;
            }
        }
        //cout<<m['0']<<" "<<m['1']<<endl;
    }
    if(m['0']<0||m['1']<0){
        cout<<-1<<endl;
        return;
    }
    //cout<<m['0']<<" "<<m['1'];
    if(fg){
        if(m['0']%2==1){
            m['0']--;
            s[n/2]='0';
        }
        else if(m['1']%2==1){
            m['1']--;
            s[n/2]='1';
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    if(m['0']%2==1||m['1']%2==1){
        cout<<-1<<endl;
        return;
    }
    for (ll i = 0; i < n/2; i++)
    {
        if (s[i]=='?'&&m['0']!=0)
        {
            s[i]='0';
            s[n-i-1]='0';
            m['0']-=2;
        }
        else if(s[i]=='?'&&m['1']!=0){
            s[i]='1';
            s[n-i-1]='1';
            m['1']-=2;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    
    
    
    
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