#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n; 
    cin>>n;
     vector<int>f;
     for(int i=0;i<n;i++) 
     {
        int x;
        cin>>x;
        f.push_back(x);
     }
     sort(f.begin(),f.end());
     for(auto it=f.begin();it!=f.end();it++)
     {
         cout<<*it<<"\t";
     }
    return 0;
}
 