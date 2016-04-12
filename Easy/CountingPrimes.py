import sys
import math

def isPrime(z):
    if z%2==0:
        return 0
    for i in range(3,int(pow(z,.5))+1,2):
        if z%i==0:
            return 0
    return 1

test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    test=test.split(",")
    mini=int(test[0])
    maxi=int(test[1])
    
    n=0
    for i in range(mini,maxi+1):
        if isPrime(i)==1:
            n+=1
    print(n)
test_cases.close()
