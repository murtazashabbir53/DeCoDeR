#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int T,i,Y;
  scanf("%d",&T);
  
  for(i=0;i<T;i++)
  {
    scanf("%d",&Y);
    
    (Y%4==0 & (Y%100!=0 || Y%400==0))?printf("Yes\n"):printf("No");
   
  }
  return 0;
