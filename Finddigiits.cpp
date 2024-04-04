int findDigits(int n) {
    int z;
    int num=n;
    int flag=0;
    while(n!=0)
    {
        z=n%10;
        if(z!=0)
        {
        if(num%z==0)
        {
            flag++;
        }
        }
        n=n/10;
        
    }
    return flag;

}
