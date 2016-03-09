import math
import sys

def xyString(string,x,y,l):
    return string[2*x+2*y*l]

test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    size=1+len(test)//2
    edge=int(math.sqrt(size))
    pr=""
    for i in range(edge):
        for j in range(edge-1,-1,-1):
            pr+=xyString(test,i,j,edge)+" "
    print(pr)
    
test_cases.close()
