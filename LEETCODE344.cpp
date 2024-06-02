class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=s.size();
        int mid=l/2;
        int t=s.size()%2;
        int i=0;
        int d=l/2;
        if(t==1)
        {
            while(i!=mid)
            {
                char x=s[l-1-i];
                s[l-i-1]=s[i];
                s[i]=x;
                i++;
            }
        }
        else{
            for(int j=0;j<d;j++)
            {
                char x=s[l-1-j];
                s[l-j-1]=s[j];
                s[j]=x;
        
            }

        }
        
    }
};
