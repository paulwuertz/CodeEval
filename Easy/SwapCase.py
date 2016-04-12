import math
import sys

#lese Matrizen in die Var
test_cases = open(sys.argv[1], 'r') 
#drehe Matrix
for test in test_cases:
    print(str.swapcase(test))
        
test_cases.close()
