#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.insert(i);
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}