import random
import sys

stack = []
while (len(stack) < int(sys.argv[1])):
        #stack.append(random.randint(-2147483646,2147483646))
        stack.append(random.randint(0,100))
        stack = list(set(stack))

if sorted(stack) == stack:
        random.shuffle(stack)

result = ' '.join(str(item) for item in stack)
print(result) 
