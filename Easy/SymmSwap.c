#include  <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,n,a[10];
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}
