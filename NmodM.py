import math
import sys

def mod(m,n):
    while (m-n)>=0:
        m-=n
    return m

#lese Matrizen in die Var
test_cases = open(sys.argv[1], 'r') 
#drehe Matrix
for test in test_cases:
    i=0
    for i in range(len(test)):
        if test[i]==",":
            break
    print(mod(int(test[:i]),int(test[i+1:])))
        
test_cases.close()
