import sys
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    maxi=0
    test=test.lower()
    a="abcdefghijklmnopqrstuvwxyz"
    s=[0]*26
    for b in test:
        if b in a:
            s[a.find(b)]+=1
    
    x=0
    s.sort()
    for p in s:
        x+=1   
        maxi+=x*p
    print(maxi)
test_cases.close()
