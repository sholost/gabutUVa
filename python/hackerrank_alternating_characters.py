#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the alternatingCharacters function below.
def split(word): 
    return list(word)

def alternatingCharacters(s):
    huruf=split(s)
    hasil=[]
    for i in range(0,len(huruf)-1):
        if huruf[i]!=huruf[i+1]:
            hasil.append(huruf[i])
    hasil.append(huruf[-1]) 
    return len(huruf)-len(hasil)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = alternatingCharacters(s)

        fptr.write(str(result) + '\n')

    fptr.close()
