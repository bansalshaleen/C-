/// Code by Leonardo16
///   “It is not the strength of the body, but the strength of the spirit.”   —  J.R.R. Tolkien
#include<bits/stdc++.h>
using namespace std;
//#pragma GCC optimize("Ofast")
/// Macros
//#define int long
#define ll long long
#define sz size
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define fst first
#define scd second
#define pb push_back
#define fl '\n'
#define el endl
#define all(x) x.begin() , x.end()
#define rall(x) x.rbegin() , x.rend()
/// Functions
#define db(x) cerr << #x << ": " << (x) << '\n';
#define random() __builtin_ia32_rdtsc()
#define lg2(x) 31-__builtin_clz(x)
#define lg2ll(x) 63-__builtin_clzll(x)
#define pi acos(-1)
#define YN(x) cout<<((x)?("YES"):("NO"))<<fl;
#define yn(x) cout<<((x)?("Yes"):("No"))<<fl;
/// Red-Black Tree Template
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree < long long ,  null_type ,  less<long long> ,  rb_tree_tag ,  tree_order_statistics_node_update > ordered_set;
//#define less_than(n) order_of_key(n)
//#define en_pos(n) find_by_order(n)
/// Prime numbers  173,179,311,331,737,1009,2011,2027,3079,4001,100003
///===================================================================
ull p[100005];
ull base=311;


struct str{
    string s;
    ull h[100005];

    void hsh(){
        h[0]=s[0];
        p[0]=1;
        for(int i=1;i<s.sz();i++){
            h[i]=(h[i-1]*base+s[i]);
            p[i]=p[i-1]*base;
        }
    }

    ull gethash(int l,int r){
        if(l==0){
            return h[r];
        }
        return h[r]-h[l-1]*p[r-l+1];
    }

};


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        str x;
        cin>>x.s;
        x.hsh();
        int ans=0;
        int n=x.s.sz()-1;

        for(int i=1;i<=n-2;i+=2){
            int pik1=i/2;
            int pik2=(n+i)/2;
//            cout<<pik1<<" "<<i<<" "<<pik2<<fl;
            if( (i+1)%2==0 && (n-i)%2==0 && x.gethash(0,pik1)==x.gethash(pik1+1,i) && x.gethash(i+1,pik2)==x.gethash(pik2+1,n) ){
                ans++;
            }
        }
//        cout<<x.gethash(4,6)<<" "<<x.gethash(7,9)<<fl;
        cout<<ans<<fl;;
    }
return 0;}



