import sys
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    test=test.split(", ")

    for i in range(len(test[1])):
        test[0]=test[0].replace(test[1][i],"")
    print(test[0])
test_cases.close()