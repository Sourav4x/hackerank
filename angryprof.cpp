string angryProfessor(int k, vector<int> a) {
    int n=a.size();
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0)
        {
           p++; 
        }
    }
    if(k<=p)
    {
        return "NO";
    }
    else{
        return "YES";
    }

}
