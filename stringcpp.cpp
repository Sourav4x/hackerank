#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    int len1=a.length();
    int len2=b.length();
    cout<<len1<<" "<<len2<<endl;
    string s=a;
    s.append(b);
    cout<<s<<endl;
    char temp;
     temp=a[0];
     a[0]= b[0];
     b[0]=temp;
     cout<<a<<"\t"<<b;
    
  
    return 0;
}
