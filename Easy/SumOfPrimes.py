import math

def isPrim(zahl):
    for i in range(3,(int)(zahl/2),2):
        if(zahl%i==0):
            return 0
    return 1


primAnz=1
primSum=2
zahl=3

while primAnz<1000:
    if(isPrim(zahl)==1):
        primAnz+=1
        primSum+=zahl
    zahl+=2

print(primSum)
