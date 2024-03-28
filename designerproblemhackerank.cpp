int designerPdfViewer(vector<int> h, string word) {
    int n=word.length();
    int a[n];
    for(int i=0;i<n;i++)
    {
         a[i]=static_cast<int>(word[i])-97;
    }
    int x=0;
    for(int j=0;j<n;j++)
    {
        if(h[a[j]]>x)
        {
           x= h[a[j]];
        }
    }
    
    return x*n;

}
