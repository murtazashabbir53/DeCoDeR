#include <stdio.h>
#include<string.h>
//Compiler version gcc  6.3.0

int main()
{
 int N,x,y;
 char strng[7];
  
 scanf("%d",&N);
  
 scanf("%s",strng);
 scanf("%d %d",&x,&y);
  
  if(islower(strng[x]))
    strng[x]=toupper(strng[x]); //toupper() is used to convert string from lower to upper case
  else
    strng[x]=tolower(strng[x]); //tolower() converts string from upper to lower case
    
  
  if(islower(strng[y]))
   strng[y]=toupper(strng[y]);
  else
   strng[y]=tolower(strng[y]);
   
puts(strng);  //Display the updated string 
 return 0;
}
