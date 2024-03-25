#include<bits/stdc++.h>
using namespace std;
int main()
{
   int q;
   string s;
   int marks;
   map<string,int>mp;
   cin>>q;
   for(int i=0;i<q;i++)
   {
    int n;
    cin>>n;
    if(n==1)
    {
        cin>>s>>marks;
         mp[s] += marks;
    
    }
   else  if(n==2)
    {
        cin>>s;
         mp.erase(s);
    
    }
    else if(n==3)
    {
        cin>>s;
      auto itr =mp.find(s);
      if(itr!=mp.end())
      {
      int d=itr->second;
      cout<<d<<endl;
      }
      else{
        cout<<0<<endl;
      }
      
    }
    
   }

}