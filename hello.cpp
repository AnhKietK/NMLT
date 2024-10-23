#include <iostream>
using namespace std;
int main()
{
   int a[500], cd, cr, max, max2, S=0, min, u;
   cin>>cd>>cr;
   for(int i=0; i<cr ; i++)
   {
      cin>>a[i];
   }
   for(int i=1; i<cr-1 ; i++)
   {
      max=a[i];
      max2=a[i];
      for(int u=i-1; u>=0; u--)
      {
         if(a[u]>max)
            max=a[u];//max=3  //
         
      }
      for(int u=i+1;u<cr;u++)
      {
         if(a[u]>max2)
         max2=a[u]; //max2=4
      }
if(max>=max2 && max2>a[i])
{
   S=S+(max2-a[i]);
}
else if(max<max2 && max>a[i])
{
   S=S+(max-a[i]);//S=3
                  //

}
   }
   // cout<<S;
   return 0;
}