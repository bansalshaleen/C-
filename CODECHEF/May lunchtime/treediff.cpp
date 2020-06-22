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


ve<int> ty;
bool fff=0;
void add_edge(vector<int> adj[], int src, int dest) 
{ 
    adj[src].push_back(dest); 
    adj[dest].push_back(src); 
} 
  
// a modified version of BFS that stores predecessor 
// of each vertex in array p 
// and its distance from source in array d 
bool BFS(vector<int> adj[], int src, int dest, int v, 
         int pred[], int dist[]) 
{ 
    // a queue to maintain queue of vertices whose 
    // adjacency list is to be scanned as per normal 
    // DFS algorithm 
    list<int> queue; 
  
    // boolean array visited[] which stores the 
    // information whether ith vertex is reached 
    // at least once in the Breadth first search 
    bool visited[v]; 
  
    // initially all vertices are unvisited 
    // so v[i] for all i is false 
    // and as no path is yet constructed 
    // dist[i] for all i set to infinity 
    for (int i = 0; i < v; i++) { 
        visited[i] = false; 
        dist[i] = INT_MAX; 
        pred[i] = -1; 
    } 
  
    // now source is first to be visited and 
    // distance from source to itself should be 0 
    visited[src] = true; 
    dist[src] = 0; 
    queue.push_back(src); 
  
    // standard BFS algorithm 
    while (!queue.empty()) { 
        int u = queue.front(); 
        queue.pop_front(); 
        for (int i = 0; i < adj[u].size(); i++) { 
            if (visited[adj[u][i]] == false) { 
                visited[adj[u][i]] = true; 
                dist[adj[u][i]] = dist[u] + 1; 
                if((dist[u]+1)>100)
                {
                    fff=1;
                    br;
                }
                pred[adj[u][i]] = u; 
                queue.push_back(adj[u][i]); 
  
                // We stop BFS when we find 
                // destination. 
                if (adj[u][i] == dest) 
                    return true; 
            } 
            
        } 
        if(fff)
            br;
    } 
  
    return false; 
} 
  
// utility function to print the shortest distance 
// between source vertex and destination vertex 
void printShortestDistance(vector<int> adj[], int s, 
                           int dest, int v) 
{ 
    // predecessor[i] array stores predecessor of 
    // i and distance array stores distance of i 
    // from s 
    int pred[v], dist[v]; 
  
    if (BFS(adj, s, dest, v, pred, dist) == false) { 
        //cout << "Given source and destination"
            // << " are not connected"; 
        return; 
    } 
    if(fff)
    return;
    // vector path stores the shortest path 
    vector<int> path; 
    int crawl = dest; 
    path.push_back(crawl); 
    while (pred[crawl] != -1) { 
        path.push_back(pred[crawl]); 
        crawl = pred[crawl]; 
    } 
  
    // distance from source is in distance array 
    
    // printing path from source to destination 
    //cout << "\nPath is::\n"; 
    //ty.resize(path.size(),0);
    for (int i = path.size() - 1; i >= 0; i--) 
    {
        //cout << path[i] << " "; 
        //ty[i-path.size()+1]=(path[i]);
        ty.pb(path[i]);
        //cout<<path[i]<<"ghj ";
    }
} 





int main()
{
    FAST;
    int t;
    cin>>t;
    while(t--)
    {
        fff=0;
        int n,q;
        cin>>n>>q;
        ve<int> a(n,0);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ve<int> adj[n];
        int a1,b1;
        for (int i = 0; i < n-1; i++)
        {
            cin>>a1>>b1;
            add_edge(adj,a1-1,b1-1);
        }
        //cout<<q<<" hjad"<<endl;
        for (int i = 0; i < q; i++)
        {
            fff=0;
            cin>>a1>>b1;
            if(a1==b1)
            {
                cout<<0<<endl;
            }
            else{
            //cout<<"ghj"<<endl;
            printShortestDistance(adj, a1-1, b1-1, n);
            //cout<<a1<<" "<<b1<<endl;
            int min=100;
            if(fff)
                min=0;
            else{
            //cout<<endl;
            //cout<<"ghj"<<endl;
            ve<int> g(ty.size(),0);
            for (int j = 0; j < ty.size(); j++)
            {
                g[j]=a[ty[j]];
            }
            sort(g.begin(), g.end());
            for (int j = 0; j < g.size()-1; j++)
            {
                /* code */
                if(abs(g[j]-g[j+1])<min)
                {
                    min=abs(g[j]-g[j+1]);
                }
            }}
            cout<<min<<endl;


            ty.clear();
            }
        }
        
        
    }


    return 0;
}