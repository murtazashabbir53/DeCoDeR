#python 3.

import math

T=int(input())

for _ in range(T):
  N,M=map(int,input().split())
  
  gcd=(math.gcd(M,N)) 
  
  sm=M//gcd
  print(sm)
  
  
   
    
   
  
    
  
  

  
