import random
import sys

stack = []

for i in range(int(sys.argv[1])):
    #stack.append(random.randint(-2147483648,2147483646))
    stack.append(random.randint(-1000,1000))

result = ' '.join(str(item) for item in stack)
print(result) 
