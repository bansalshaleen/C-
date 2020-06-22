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

void buildTree(int* arr,int* tree, int start, int end, int treeNode)
{
    if(start==end)
    {
        tree[treeNode]=arr[start];
        return ;

    }
    int mid= start+(end-start)/2;
    buildTree(arr, tree, start, mid, 2*treeNode);
    buildTree(arr, tree, mid+1, end, 2*treeNode+1);
    

    tree[treeNode]=tree[2*treeNode]+tree[2*treeNode+1];
}

int main()
{
    FAST;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int* tree = new int[18];
    buildTree(arr,tree,0,8,1);


    for (int i = 1; i < 18; i++)
    {
        cout<<tree[i]<<" ";
    }
    cout<<endl;
    
}