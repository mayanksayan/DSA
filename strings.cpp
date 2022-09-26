

#include <iostream>
#include <string>
using namespace std;

int main() {
    int i,n,m;
    string a,b;
    cin>>a>>b;
    
    n=a.size();
    m=b.size();
     
     string c= a+b;
     
     int temp=0;
     temp=a[0];
     a[0]=b[0];
     b[0]=temp;
     
     cout<<n<<"\t"<<m<<"\n"<<c<<"\n"<<a<<"\t"<<b;  
     
    return 0;
}
