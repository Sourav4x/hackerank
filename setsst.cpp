#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    set<int>s;
    cin>>q;
    for(int i=0;i<q;i++)
    {
    int y,x;
    cin>>y>>x;
    
    if(y==1)
    {
        s.insert(x);
    }
    else if(y==2)
    {
        s.erase(x);
    }
    else if(y==3)
    {
        auto u=s.find(x);
        if(*u==s.size())
        {
           cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    }
       
    return 0;
}

