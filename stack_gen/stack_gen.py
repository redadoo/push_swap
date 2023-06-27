import random
import sys

stack = []
while (len(stack) < int(sys.argv[1])):
        stack.append(random.randint(-2147483646,2147483646))
        stack = list(set(stack))

result = ' '.join(str(item) for item in stack)
print(result) 
