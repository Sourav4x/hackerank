class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>b(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            b[i]=s;
        }

        vector<int>right(n,0);
        vector<int>ld(2*n-1,0);
        vector<int>ud(2*n-1,0);
        help(n,right,ld,ud,ans,b,0);
        return ans;
    }
    void help(int &n,vector<int>&right,vector<int>&ld,vector<int>&ud,vector<vector<string>>&ans,vector<string>&b,int col)
    {
        if(col==n)
        {
            ans.push_back(b);
            return;
        }
        for(int j=0;j<n;j++)
        {
            if(right[j]==0 && ld[j+col]==0 && ud[n-1+col-j]==0)
            {
                b[j][col]='Q';
                right[j]=1;
                ld[j+col]=1;
                ud[n-1+col-j]=1;
                help(n,right,ld,ud,ans,b,col+1);
                b[j][col]='.';
                right[j]=0;
                ld[j+col]=0;
                ud[n-1+col-j]=0;
            }
        }
    }
};
