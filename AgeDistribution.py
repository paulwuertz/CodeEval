import math

import sys
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    if(int(test)<0):
        print("This program is for humans")
    elif(int(test)<3 and int(test)>-1):
        print("Still in Mama's arms")
    elif(int(test)<5 and int(test)>2):
        print("Preschool Maniac")
    elif(int(test)<12 and int(test)>4):
        print("Elementary school")
    elif(int(test)<15 and int(test)>11):
        print("Middle school")
    elif(int(test)<19 and int(test)>14):
        print("High school")
    elif(int(test)<23 and int(test)>18):
        print("College")
    elif(int(test)<66 and int(test)>22):
        print("Working for the man")
    elif(int(test)<101 and int(test)>65):
        print("The Golden Years")
    elif(int(test)>100):
        print("This program is for humans")
    
test_cases.close()
