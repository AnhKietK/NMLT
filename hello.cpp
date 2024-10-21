#include <iostream>
using namespace std;
void nhapMang(int  a[205][205], int n)
{
   for(int i=0; i<n; i++)
   {
      for(int j=0; j<3; j++)
      {
         cin>>a[i][j];
      }
   }
}
int main()
{
   int n, dem = 0, a[205][205], S=0;
   cin>>n;
   nhapMang(a, n);
    for(int i=0; i<n; i++)
   {
      dem=0;
      for(int j=0; j<3; j++)
      {
         if(a[i][j]==1)
         {
         dem+=1;
         }
         if(dem==2)
         {
           S+=1;
           break;
         }
      }
   }
   cout<<S;
   return 0;
   
   
}