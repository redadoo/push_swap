import random

stack = []
x = input("stack len : \n")
x = int(x)


for i in range(x):
    stack.append(random.randint(-2147483648,2147483647))

result = ' '.join(str(item) for item in stack)
print(result) 