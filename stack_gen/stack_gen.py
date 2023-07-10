import random
import sys

stack = []
x = int(sys.argv[1])
while (len(stack) < x):
        #stack.append(random.randint(-2147483646,2147483646))
        stack.append(random.randint(-100,100))
        stack = list(set(stack))
        
random.shuffle(stack)

result = ' '.join(str(item) for item in stack)
print(result) 
