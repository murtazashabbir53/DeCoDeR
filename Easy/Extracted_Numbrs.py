#python 3.7.1

N=int(input())
strng=input()

for word in strng:
  if word.isdigit():
    extracted_nums=word
    print(extracted_nums,sep=' ',end=' ',flush=False) #In a for loop if I want to display the elements in a single line then {end='',flush=false }is used. 
                                                       
                                                            
                                     #integer value will be extracted from the word if exist
