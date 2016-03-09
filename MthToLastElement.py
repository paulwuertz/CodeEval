import sys
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    test=test.split(" ")
    if int(test[-1])<len(test)-1:
        print(test[-1*int(test[-1])-1])
test_cases.close()
