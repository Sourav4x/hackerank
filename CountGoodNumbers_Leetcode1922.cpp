#define mod 1000000007
class Solution {
public:
long long p(long long x,long long y)
{
long long ans=1;
long long n=y;
while(n)
{
    if(n%2)
    {
        ans=(ans*x)%mod;
        
        n=n-1;
    }
    else{
        x=(x*x)%mod;
        
        n=n/2;
    }
}
return ans;
}
    int countGoodNumbers(long long n) {
        long long  even=(n+1)/2;
        long long odd=n/2;
        return (p(5,even)*p(4,odd))% mod;
    }
};
