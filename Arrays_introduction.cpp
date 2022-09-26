#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int i,j,n,m,p;
 
   cin>>n;
   int a[n];
   int b[n];
   m=n;
   for (i=0;i<n;i++)
   {
      
       cin>>a[i];
      
   } 
   
   for (j=0;j<n;j++)
   {
       p=(n-1)-j;
       b[j]=a[p];
       
   }
   
   for(j=0;j<m;j++)
   {
       cout<<b[j]<<"\t";
   }

 
    return 0;
}
