void  subs(vector<int> &v,int n,int k,vector<int> &a,int i, int sum,int &g,vector<vector<int>> &s);
bool isSubsetPresent(int n, int k, vector<int> &a)
{
    // Write your code here
    vector<int>v;
   // int sum;
   // sum=0;
    //subs(v,n,k,a,0,sum);
    vector<vector<int>>s;
    int g;
    
 subs(v,n,k,a,0,0,g,s);
 if(g==1)
 return true;
 else 
 return false;
 

}
void  subs(vector<int> &v,int n,int k,vector<int> &a,int i,  int sum,int &g,vector<vector<int>>&s)
{
    if(i==n)
    {
       s.push_back(v);
        if(sum==k)
        {
          g=1;
          
          
        }
        
            sum=0;
            return ;
            

    }
    v.push_back(a[i]);
    for (int j = i; j < n; j++) {
        if(sum>k)
        break;
            subs(v, n, k, a, i + 1, sum + a[i], g,s);
            if (g == 1)
          return;
    }
   v.pop_back();
    subs(v,n,k,a,i+1,sum,g,s);
    
}
