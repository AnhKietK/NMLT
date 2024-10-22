#include <iostream>
using namespace std;
int main()
{
   int n, m;
   cin>>n>>m;
    int hang1 = 0, hangn = n, cot1 = 0, cotn = m, dem=1;
   
   int a[100][100];
   while (hang1 <= hangn && cot1 <= cotn)
   {
      for (int i = cot1; i < cotn ; i++)
      {
        a[hang1][i]=dem;
        dem+=1;
      }
      hang1+=1;
      for (int i=hang1; i<hangn ; i++)
      {
         a[i][cotn]=dem;
         dem+=1;
      }
      cotn-=1;
      for(int i=cotn; i>=cot1; i--)
      {
         a[hangn][i]=dem;
         dem+=1;

      }
      hangn-=1;
      for(int i=hangn; i>=hang1;i--)
      {

         a[i][cot1]=dem;
         dem+=1;
      }
      cot1+=1;
}
for(int i=0;i<n;i++)
{
   for(int j=0;j<m;j++)
   {
      cout<<a[i][j]<<" ";
   }
   cout<<endl;
}
return 0;
}