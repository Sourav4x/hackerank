class Solution {
public:
    int romanToInt(string s) {
        
        int sum=0;
        int d;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                
                sum=sum+1;
                d=1;
                

            }
            else if(s[i]=='V')
            {
                if(d<5)
                {
                    sum-=2*d;
                }
                sum=sum+5;
                d=5;
            }
            else if(s[i]=='X'){
                if(d<10){
                    sum=sum-2*d;
                }
                sum=sum+10;
                d=10;
            }
            else if(s[i]=='L'){
                if(d<50){
                    sum=sum-2*d;
                }
                sum=sum+50;
                d=50;
            }
            else if(s[i]=='C'){
                if(d<100){
                    sum=sum-2*d;
                }
                sum=sum+100;
                d=100;
            }
        else if(s[i]=='D'){
            if(d<500){
                sum=sum-2*d;
            }
            sum+=500;
            d=500;
        }
        else{
            if(d<1000){
                sum=sum-2*d;
            }
            sum+=1000;
            d=1000;
        }
        }
        return sum;

    }
};
