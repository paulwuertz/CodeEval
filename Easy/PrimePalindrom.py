import math

def isPrim(zahl):
    for i in range(3,(int)(zahl/2),2):
        if(zahl%i==0):
            return 0
    return 1

def isPali(zahl):
    for i in range(int(len(zahl)/2)+1):
        if(zahl[i-1]!=zahl[-i]):
            return 0
    return 1

zahl=1000
true=0

while true!=1 and zahl>2:
    if(isPrim(zahl)==1 and isPali(str(zahl))==1):
        true=1
        print(zahl)
    zahl-=1