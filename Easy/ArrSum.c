#include  <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int i,N,arr[25],sum=0,rem;
  scanf("%d",&N);
      
     for(i=0;i<N;i++)
     {
       scanf("%d ",&arr[i]);
     }
   for(i=0;i<N;i++)
   {
        sum=sum+arr[i];
   }
  rem = sum%N;
 printf("%d",&rem);
       
      
  return 0;
}
