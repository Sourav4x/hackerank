#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstdlib>
using namespace std;
void update(int *c,int *d)
{
    int temp=*c;
    *c=*c+*d;
    int x=temp-*d;
    
    *d=abs(x);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a, b;  
    cin>>a>>b;
    update(&a,&b);
    cout<<a<<endl<<b;
    return 0;
}