string kangaroo(int x1, int v1, int x2, int v2) {
    string s="YES";
    string y="NO";
    if((x2>x1)&&(v2>v1))
    {
        return y;
    }
    else if((x1>x2)&&(v1>v2))
    {
        return s;
    }
    else{
     
           if(v1==v2)
          {
              if(x1>x2 || x2>x1)
              {
                  return y;
              }
          }
          else if((x2-x1)%(v2-v1)==0)
          {
              return s;
          }
          else {
              return y;
    }
    }
    
    
    
return 0;
}