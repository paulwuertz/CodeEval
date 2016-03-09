import sys

t=[]
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    t.append(test)
test_cases.close()

a=int(t[0])
t=t[1:]
t=sorted(t,key=len)

for i in range(a):
    print(t[-i-1])
