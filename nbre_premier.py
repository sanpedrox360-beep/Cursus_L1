import math

N=int(input())


if N<=1:
    x= "Nombre non premier"
elif N==2 or N==3:
    x= "Nombre premier"
else:
    x= "Nombre premier"
    for i in range(2,int(math.sqrt(N))+1):
        if N%i==0 :
            x= "Nombre non premier"
print(x)

