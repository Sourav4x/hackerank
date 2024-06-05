class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
          vector<vector<int>> v(words.size(), vector<int>(26, 0));
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                v[i][words[i][j]-97]++;
            }
        }
         vector<int>freq(26,INT_MAX);
        for(int j=0;j<26;j++)
        {
            for(int i=0;i<words.size();i++)
            {
                freq[j]=min(freq[j],v[i][j]);
            }
        }
        vector<string>s;
        for(int i=0;i<26;i++)
        {
            while(freq[i]>0)
            {
                s.push_back(string(1,97+i));
                freq[i]--;
            }
        }
        return s;
    
    }
};
