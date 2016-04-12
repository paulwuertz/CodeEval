import sys
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    test=test.split(",");
    a=int(test[0])
    b=int(test[1]);
    c=int(test[1]);
    while c<a:
        c=c+b
    print(c)
test_cases.close()