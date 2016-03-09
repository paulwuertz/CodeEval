import sys

def string(n):
    v = 0
    c = [i for i in str(n)]
    for i in c:
        v+=int(i)**2
    return v

def ishappy(i):    
    loop=[]
    while i!=1:   
        i=string(i)
        if i in loop:
            print("0")
            return    
        loop.append(i)
    print(i)

test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    ishappy(int(test))

test_cases.close()
